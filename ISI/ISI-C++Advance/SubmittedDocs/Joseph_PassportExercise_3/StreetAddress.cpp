#include "StreetAddress.h"
#include<iostream>
#include<string>
using namespace std;



StreetAddress::StreetAddress()
{
}

StreetAddress:: StreetAddress(int x, string s1, string s2, string s3)
{
	this->streetNumber = x;
	this->streetName = s1;
	this->city = s2;
	this->country = s3;

}
int StreetAddress::getStreetNumber()
{
	return streetNumber;
}
string StreetAddress::getStreetName()
{
	return streetName;
}
string StreetAddress::getCity()
{
	return city;
}
string StreetAddress::getCountry()
{
	return country;
}
bool StreetAddress::isStreetNumberEven()
{
	if (this->streetNumber % 2 == 0)
		return 1;
	else
		return 0;
}
int StreetAddress::getStreetNameLength()
{
	return this->streetName.size();
}
char StreetAddress::getCityInitialLetter()
{
	string s1 = this->city;
	return s1[0];
}
string StreetAddress::getCountryCode()
{
	return this->country.substr(0, 3);
}
string StreetAddress::toString()
{
	return to_string(this->streetNumber) + " " + this->streetName + ", " + this->city + ", " + this->country;	
}
void StreetAddress::display()
{
	cout << "\nThe adrees enterd is : " << toString() << endl;
}
