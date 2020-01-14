#pragma once
#include<iostream>
#include<string>
#include <ctime>
#include"Date.h"
#include"StreetAddress.h"
using namespace std;
class Passport
{
private:
	const int LEGAL_ADULT_AGE = 18;
	const int SENIOR_CITIZEN_AGE = 65;
	const double AVERAGE_HEIGHT = 5.5;
	string firstName;
	string lastName;
	double height;
	Date dateOfBirth;
	StreetAddress address;
public:
	Passport();
	Passport(string, string, double, Date, StreetAddress);
	string getfirstName();
	string getlastName();
	double getheight();
	Date getdateOfBirth();
	StreetAddress getaddress();
	string getFullName();
	int getAgeInYears();
	int getAgeInMonths();
	int getAgeInDays();
	bool isYouth();
	bool isWorkingAge();
	bool isSeniorCitizen();
	bool canVote();
	double getHeightDifferenceFromAverage();


};

