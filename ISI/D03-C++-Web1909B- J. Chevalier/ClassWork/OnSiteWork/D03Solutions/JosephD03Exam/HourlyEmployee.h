#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class HourlyEmployee:public Employee
{
private:
	double hourlyWage;
	double hoursPaid;

	// Field setter method
	void setHourlyWage(double hourlyWage);

public:
	// Constructor
	HourlyEmployee(string name, string jobTitle, double hourlyWage);

	// Field getter methods
	double getHourlyWage();
	double getHoursPaid();
	
	// Virtual override action methods
	virtual bool payEmployee();
	virtual bool giveEmployeeRaise(double percentage);

	// Virtual override methods
	virtual string getStatusString();
};
