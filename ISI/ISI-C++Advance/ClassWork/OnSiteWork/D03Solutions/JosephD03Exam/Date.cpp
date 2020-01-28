#include "Date.h"
using namespace std;

// Instance methods

Date::Date(int year, int month, int day)
{
	// Any year is valid, so no need to validate
	// Store argument in year field
	this->year = year;

	// Validate month
	if (month < 1)
		month = 1;
	else if (month > 12)
		month = 12;

	// Store validated month argument in month field
	this->month = month;
	
	// Validate day
	if (day < 1)
		day = 1;
	int lastDayOfMonth = getLastDayOfMonth(month, year);
	if (day > lastDayOfMonth)
		day = lastDayOfMonth;

	// Store validated day argument in day field
	this->day = day;

	// All of the object's fields have now been initialized with valid values
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

bool Date::isLeapYear()
{
	return isLeapYear(this->year);
}

string Date::getMonthString()
{
	return getMonthString(this->month);
}

int Date::getLastDayOfMonth()
{
	return getLastDayOfMonth(this->month, this->year);
}

Season Date::getNorthernSeason()
{
	return getSeason(this->month, this->day, true);
}

Season Date::getSouthernSeason()
{
	return getSeason(this->month, this->day, false);
}

int Date::getYearsUntil(Date* otherDate)
{
	return getYearsBetween(this, otherDate);
}

int Date::getMonthsUntil(Date* otherDate)
{
	return getMonthsBetween(this, otherDate);
}

int Date::getDaysUntil(Date* otherDate)
{
	return getDaysBetween(this, otherDate);
}

string Date::toString()
{
	return getMonthString() + " " + to_string(day) + ", " + to_string(year);
}

string Date::toStringCalculated()
{
	return "Is leap year = " + StringConversions::boolToString(isLeapYear())
		+ ", Month string = " + getMonthString()
		+ ", Last day of month = " + to_string(getLastDayOfMonth())
		+ ", Northern season = " + getSeasonString(getNorthernSeason())
		+ ", Southern season = " + getSeasonString(getSouthernSeason());
}

void Date::display()
{
	cout << toString() << endl;
}

void Date::displayCalculated()
{
	cout << toStringCalculated() << endl;
}


// Static methods (calculated getter methods)

bool Date::isLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

string Date::getMonthString(int month)
{
	switch (month)
	{
	case 1: return "January";
	case 2: return "February";
	case 3: return "March";
	case 4: return "April";
	case 5: return "May";
	case 6: return "June";
	case 7: return "July";
	case 8: return "August";
	case 9: return "September";
	case 10: return "October";
	case 11: return "November";
	case 12: return "December";
	default: return "";
	}
}

int Date::getLastDayOfMonth(int month, int year)
{
	int lastDayOfMonth;
	if ((month < 8 && month % 2 == 1)
		|| (month >= 8 && month % 2 == 0))
		lastDayOfMonth = 31;
	else if (month == 2)
		lastDayOfMonth = (isLeapYear(year)) ? 29 : 28;
	else
		lastDayOfMonth = 30;
	return lastDayOfMonth;
}

Season Date::getSeason(int month, int day, bool northernHemisphere)
{
	if (month < 1 || month > 12)
		return (Season)-1;
	
	Season season;

	if (month == 3)
		season = (day < 21) ? Season::WINTER : Season::SPRING;
	else if (month == 6)
		season = (day < 21) ? Season::SPRING : Season::SUMMER;
	else if (month == 9)
		season = (day < 21) ? Season::SUMMER : Season::AUTUMN;
	else if (month == 12)
		season = (day < 21) ? Season::AUTUMN : Season::WINTER;
	else if (month < 3)
		season = Season::WINTER;
	else if (month < 6)
		season = Season::SPRING;
	else if (month < 9)
		season = Season::SUMMER;
	else
		season = Season::AUTUMN;

	if (!northernHemisphere)
	{
		int seasonInt = (int)season + 2;
		if (seasonInt >= 4)
			seasonInt -= 4;
		season = (Season)seasonInt;
	}

	return season;
}

string Date::getSeasonString(Season season)
{
	switch (season)
	{
	case Season::WINTER: return "Winter";
	case Season::SPRING: return "Spring";
	case Season::SUMMER: return "Summer";
	case Season::AUTUMN: return "Autumn";
	default: return "";
	}
}

int Date::getYearsBetween(Date* first, Date* second)
{
	return second->getYear() - first->getYear();
}

int Date::getMonthsBetween(Date* first, Date* second)
{
	int yearsBetween = getYearsBetween(first, second);
	int monthsBetween = yearsBetween * 12;
	monthsBetween += second->getMonth() - first->getMonth();
	return monthsBetween;
}

int Date::getDaysBetween(Date* first, Date* second)
{
	int yearsBetween = getYearsBetween(first, second);
	int approxLeapYears = (int)(yearsBetween / 4);
	int daysBetween = yearsBetween * 365;
	daysBetween += approxLeapYears;
	daysBetween += second->getDay() - first->getDay();
	return daysBetween;
}

Date Date::getToday()
{
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	return Date(now.tm_year + 1900, now.tm_mon + 1, now.tm_mday);
}

//	Mock version of getToday():
//		Time passes in extreme fast-motion
//		Current ratio: Every 2 real-time seconds, 1 mock-time day passes

//Date Date::getToday()
//{
//	struct tm now;
//	time_t nowTime = time(0);
//	localtime_s(&now, &nowTime);
//
//	int time = (((((now.tm_yday * 24) + now.tm_hour) * 60) + now.tm_min) * 60) + now.tm_sec;
//	time /= 2;	// This number of real-time seconds maps to 1 mock-time day
//
//	int year = (time / 365) % 10000;
//	time = time % 365;
//	int month = (int)(time / 30) + 1;
//	time = time % 30;
//	int day = time + 1;
//	
//	return Date(year, month, day);
//}

