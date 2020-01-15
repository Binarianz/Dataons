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
	return (now.tm_year+1900) - dateOfBirth.getYear();
	//time_t  k = time(0);
	//localtime_s(&k);
	//return 1900 + k->tm_year .getYear();
}

int Passport::getAgeInMonths()
{
	int year = this->getAgeInYears() * 12;
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	return now.tm_mon + 1 + year;

}

int Passport::getAgeInDays()
{
	int days = this->getAgeInMonths() * 30;
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	return now.tm_mday + days;

}

bool Passport::isYouth()
{
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	Date today = Date(now.tm_year + 1900, now.tm_mon + 1, now.tm_mday);	
	return ((now.tm_year + 1900) - dateOfBirth.getYear()) <= this->LEGAL_ADULT_AGE;
}

bool Passport::isWorkingAge()
{
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	Date today = Date(now.tm_year + 1900, now.tm_mon + 1, now.tm_mday);
	return ((now.tm_year + 1900) - dateOfBirth.getYear()) >= this->LEGAL_ADULT_AGE && ((now.tm_year + 1900) - dateOfBirth.getYear()) <= this->SENIOR_CITIZEN_AGE;
	//return (dateOfBirth.getYear()  && dateOfBirth.getYear()<=this->SENIOR_CITIZEN_AGE);
}

bool Passport::isSeniorCitizen()
{
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	Date today = Date(now.tm_year + 1900, now.tm_mon + 1, now.tm_mday);
	//return ((now.tm_year + 1900) - dateOfBirth.getYear()) <= this->LEGAL_ADULT_AGE;
	return ((now.tm_year + 1900) - dateOfBirth.getYear()) >= this->SENIOR_CITIZEN_AGE;
}

bool Passport::canVote()
{
	struct tm now;
	time_t nowTime = time(0);
	localtime_s(&now, &nowTime);
	Date today = Date(now.tm_year + 1900, now.tm_mon + 1, now.tm_mday);
	return((now.tm_year + 1900) - dateOfBirth.getYear()) >= this->LEGAL_ADULT_AGE;
}

double Passport::getHeightDifferenceFromAverage()
{
	return this->height - this->AVERAGE_HEIGHT;
}

string Passport::toString()
{
	return this->firstName + " " + this->lastName + ": Height = " + to_string(this->height).substr(0,4) + " meters, Date of birth = " + dateOfBirth.toString() + ",\n Address = " + address.toString();
}

void Passport::display()
{
	cout<< this->toString() << endl;
}
