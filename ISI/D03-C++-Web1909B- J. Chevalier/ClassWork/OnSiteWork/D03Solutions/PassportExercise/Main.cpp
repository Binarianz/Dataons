#include<iostream>
#include<string>
#include"Date.h"
#include"StreetAddress.h"
#include"Passport.h"
using namespace std;
int main()
{
	//Date defaultDate = Date();
	Date myDate = Date(1, 1,2005);	
	Date mydate2 = Date(1, 2, 2020);
	myDate.display();
	mydate2.display();
	cin.get();
	cout << "myDate2.getDaysinmonth() = " << mydate2.getDaysInMonth() << endl;
	int yearBetween = myDate.getYearsBetween(mydate2);
	int monthBetween = myDate.getMonthsBetween(mydate2);
	int daysBetween = mydate2.getDaysBetween(myDate);
	cout << "Years between : " << yearBetween << endl;
	cout << "Months between : " << monthBetween << endl;
	cout << "Days between : " << daysBetween << endl;
	//street address details
	cin.get();
	system("CLS");

	StreetAddress str1 = StreetAddress(1234, "Main Street", "Springfield", "Canada");
	str1.display();
	cout << "\nisStreetNumberEven() = " << str1.isStreetNumberEven()<<endl;
	cout << "getStreetNameLength() = " << str1.getStreetNameLength()<<endl;
	cout << "getCityInitialLetter() = " << str1.getCityInitialLetter() << endl;
	cout << "getCountryCode() = " << str1.getCountryCode() << endl;
	Passport p1 = Passport("Raj", "Patel", 1.8, myDate, str1);
	cin.get();
	system("CLS");
	cout << "getAgeInYear() = " << p1.getAgeInYears()<<endl;
	cout << "getAgeInMonths() = " << p1.getAgeInMonths() << endl;
	cout << "getAgeInDays() = " << p1.getAgeInDays() << endl;
	cout << "isYouth() = " << p1.isYouth() << endl;
	cout << "isWorkingAge() = " << p1.isWorkingAge() << endl;
	cout << "isSeniorCitizen() = " << p1.isSeniorCitizen() << endl;
	cout << "canVote() = " << p1.canVote() << endl << endl << endl;;
	cout << "getHeightDifferenceFromAverage() = " << p1.getHeightDifferenceFromAverage() << endl<<endl;
	p1.display();
	

	//test
	//cout << "MyPoint.x : " << myDate.getDay() << endl;
	//cout << "MyPoint.y : " << myDate.getMonth() << endl;
	//cout << "MyPoint.z : " << myDate.getYear() << endl << endl << endl;
	//cout << "the differece is : " << myDate.getYearsBetween(mydate2) << endl;
	////myDate.display();
	//cout << endl << "adata betweeen dates" << endl;
	//cout << "MyPoint.x : " << mydate2.getDay() << endl;
	//cout << "MyPoint.y : " << mydate2.getMonth() << endl;
	//cout << "MyPoint.z : " << mydate2.getYear() << endl << endl << endl;
	////cout << "the differece is : " << myDate.getYearsBetween(mydate2) << endl;
	//myDate.display();
	////month between
	//cout << myDate.getMonthsBetween(mydate2) << endl;
	//cout << "lep year : " << myDate.isLeapYear() ?1 : 0;
	//str1.display();
	//cout << "Days in this month is : " << myDate.getDaysInMonth();
	//cout<<"\n "
}