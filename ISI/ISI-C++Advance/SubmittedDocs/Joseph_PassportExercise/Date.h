#pragma once
#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date();
	Date(int, int, int);
	int getYear();
	int getMonth();
	int getDay();
	string getMonthString();
	int getYearsBetween(Date);
	int getMonthsBetween(Date);
	int getDaysBetween(Date);
	bool isLeapYear();
	int getDaysInMonth();
	string toString();
	void display();

};

