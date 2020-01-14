#include"Passport.h"
Passport::Passport()
{

}
Passport::Passport(string s1, string s2, double dou, Date d1, StreetAddress st1)
{
	this->firstName = s1;
	this->lastName = s2;
	this->height = dou;
	this->dateOfBirth = d1;
	this->address = st1;
}
string Passport::getfirstName()
{
	return this->firstName;
}
string Passport::getlastName()
{
	return this->lastName;
}
double Passport::getheight()
{
	return this->height;
}
Date Passport::getdateOfBirth()
{
	return this->dateOfBirth;
}
StreetAddress Passport::getaddress()
{
	return this->address;
}

string Passport::getFullName()
{
	return this->firstName + " "+this->lastName;
}

int Passport::getAgeInYears()
{
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	Date today = Date(now.tm_year + 1900, now.tm_mon + 1, now.tm_mday);
	//return (now.tm_year+1900) - dateOfBirth.getYear();
	//time_t  k = time(0);
	//localtime_s(&k);
	//return 1900 + k->tm_year -dateOfBirth.getYear();
}

int Passport::getAgeInMonths()
{
	return 0;
}

int Passport::getAgeInDays()
{
	return 0;
}

bool Passport::isYouth()
{
	return false;
}
