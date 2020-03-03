#pragma once
#include <iostream>
#include <string>
#include "Company.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "ConsoleMenu.h"
using namespace std;

class CompanyController
{
private:
	Company* company;

	string separator;

	void mainMenu();
	void addEmployeeMenu();
	void removeEmployee();
	void logEmployeeHoursMenu();
	void payEmployeeMenu();
	void giveEmployeeRaiseMenu();
	void displayAllEmployeesMenu();

	void displayEmployeeStatus(Employee* employee);
	void allocateEmployeeStringsArray(string** employeeStrings, int* employeesCount);

public:
	CompanyController(Company* company);
	void start();
};
