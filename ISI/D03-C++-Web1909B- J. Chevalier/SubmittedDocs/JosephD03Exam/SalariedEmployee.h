#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee:public Employee
{
private:
	double yearlySalary;
	int daysPaid;

	// Field setter method
	void setYearlySalary(double yearlySalary);

public:
	// Constructor
	SalariedEmployee(string name, string jobTitle, double yearlySalary);
	
	// Field getter methods
	double getYearlySalary();
	int getDaysPaid();

	// Calculated getter method
	double getDailySalary();
	
	// Virtual override action methods
	virtual bool payEmployee();
	virtual bool giveEmployeeRaise(double percentage);

	// Virtual override methods
	virtual string getStatusString();
};