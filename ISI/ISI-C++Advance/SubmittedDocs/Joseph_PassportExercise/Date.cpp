#include "Date.h"
using namespace std;
Date::Date()
{

}
Date::Date(int x, int y, int z)
{
	//x < 1 || x>31 ? : this->day = x;
	//day
	if (x < 1)
		this->day = 1;
	else if (x > 31)
		this->day = 31;
	else
		this->day = x;
	//month
	if (y < 1)
		this->month = 1;
	else if (y > 12)
		this->month = 12;
	else
		this->month = y;
	//year
	this->year = z;
}
int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
string Date::getMonthString()
{
	int temp = this->month;
	switch (temp)
	{
	case 1:
		return "January";
		break;
	case 2:
		return "February";
		break;
	case 3:
		return "March";
		break;
	case 4:
		return "April";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "July";
		break;
	case 8:
		return "August";
		break;
	case 9:
		return "September";
		break;
	case 10:
		return "October";
		break;
	case 11:
		return "November";
		break;
	case 12:
		return "December";
		break;
	default:

		break;
	}
}
int Date::getYearsBetween(Date otherDate)
{
	return(abs(otherDate.year - this->year));
}
int Date::getMonthsBetween(Date otherDate)
{
	int year1 = (abs(this->year - otherDate.year)) * 12;
	if (year1 == 12)
		return (12 - this->month) + otherDate.month;
	return(abs(otherDate.month - this->month)+year1);
}
int Date::getDaysBetween(Date otherDate){
	int monthsBetween = getMonthsBetween(otherDate);
	int daysBetween = monthsBetween * 30;
	daysBetween += otherDate.getDay() - this->getDay();
	return daysBetween;
	//int year1 = (otherDate.year - this->year - 1) * 365;
	//int month1 = (otherDate.month - this->month)*30;
	//return(otherDate.day - this->day)+year1+month1;
}
bool Date::isLeapYear()
{
	int year = this->year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400==0))
		return true;
	else
		return false;
}
int Date::getDaysInMonth()
{
	int temp = this->month;
	switch (temp)
	{
	case 1:
		return 31;
		break;
	case 2:
		if (isLeapYear())
			return 29;
		return 28;
		break;
	case 3:
		return 31;
		break;
	case 4:
		return 30;
		break;
	case 5:
		return 31;
		break;
	case 6:
		return 30;
		break;
	case 7:
		return 31;
		break;
	case 8:
		return 31;
		break;
	case 9:
		return 30;
		break;
	case 10:
		return 31;
		break;
	case 11:
		return 30;
		break;
	case 12:
		return 31;
		break;
	default:
		break;
	}
}
string Date::toString()
{
	//int string1 = (string)day;
	//return to_string(this->month + this->day +this->year);
	//return string1;
	//return to_string(this->month) + " " + to_string(this->day) + ", " + to_string(this->year);
	return getMonthString() +" "+to_string(this->day)+ ", "+to_string(this->year);
	
}
void Date::display()
{
	cout << "Date entered is : " << toString() << endl;
}