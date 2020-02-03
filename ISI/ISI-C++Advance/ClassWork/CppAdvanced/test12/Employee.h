#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "StringConversions.h"
using namespace std;

class Employee
{
public:
	// Static constant fields
	static const int WORK_HOURS_PER_YEAR;
	static const double MINIMUM_HOURLY_INCOME;
	static const double MAXIMUM_YEARLY_INCOME;

	// Static calculated getter methods
	static double getMinimumYearlyIncome();
	static double getMaximumHourlyIncome();
	
private:
	static int instancesCreated;
	
	int id; // Unique id
	string name;
	string jobTitle;
	int daysWorked;
	double hoursWorked;
	double paymentReceived;
	Date* dateLastPaid;

protected:
	void setPaymentReceived(double paymentReceived);

public:
	// Constructor / Destructor
	Employee(string name, string jobTitle);
	virtual ~Employee();

	// Field getter methods
	int getId();
	string getName();
	string getJobTitle();
	int getDaysWorked();
	double getHoursWorked();
	double getPaymentReceived();
	Date* getDateLastPaid();

	// Action methods
	bool logEmployeeHours(double totalHours, int totalDays);	// Log employee's total hours worked over several days
	virtual bool payEmployee() = 0;								// Employee is paid by employer, possibly including bonus
	virtual bool giveEmployeeRaise(double percentage) = 0;		// Employee is given a raise by employer

	// To-string methods
	string toString();
	virtual string getStatusString();
};
