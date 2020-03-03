#pragma once
#include<iostream>
#include<string>
using namespace std;
class StreetAddress
{
private:
	int streetNumber;
	string streetName;
	string city;
	string country;
public:
	StreetAddress();
	StreetAddress(int, string, string, string);
	int getStreetNumber();
	string getStreetName();
	string getCity();
	string getCountry();
	bool isStreetNumberEven();
	int getStreetNameLength();
	char getCityInitialLetter();
	string getCountryCode();
	string toString();
	void display();
};

