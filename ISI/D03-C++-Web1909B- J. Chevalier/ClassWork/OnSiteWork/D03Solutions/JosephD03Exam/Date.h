#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "StringConversions.h"
using namespace std;

enum class Season { WINTER, SPRING, SUMMER, AUTUMN };

class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date(int year, int month, int day);

	int getYear();
	int getMonth();
	int getDay();

	bool isLeapYear();
	string getMonthString();
	int getLastDayOfMonth();
	Season getNorthernSeason();
	Season getSouthernSeason();
	int getYearsUntil(Date* otherDate);
	int getMonthsUntil(Date* otherDate);
	int getDaysUntil(Date* otherDate);

	string toString();
	void display();
	string toStringCalculated();
	void displayCalculated();

	static bool isLeapYear(int year);
	static string getMonthString(int month);
	static int getLastDayOfMonth(int year, int month);
	static Season getSeason(int month, int day, bool northernHemisphere);
	static string getSeasonString(Season season);
	static int getYearsBetween(Date* first, Date* second);
	static int getMonthsBetween(Date* first, Date* second);
	static int getDaysBetween(Date* first, Date* second);
	static Date getToday();
};
