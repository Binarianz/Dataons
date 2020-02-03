#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class Company
{
private:
	Employee** employeesArray;
	int employeesCount;
	int arrayMaxCapacity;

	void increaseArrayMaxCapacity(int newArrayMaxCapacity);

public:
	Company();
	~Company();

	int getEmployeesCount();
	Employee* getEmployee(int index);

	int findEmployeeIndex(string name);
	int findEmployeeIndex(int id);

	void addEmployee(Employee* employee);
	bool removeEmployee(int index);
	
	string toString();
};
