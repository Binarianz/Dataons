#include "SalariedEmployee.h"
using namespace std;

// Private method

void SalariedEmployee::setYearlySalary(double yearlySalary)
{
	if (yearlySalary <getMinimumYearlyIncome())
	{
		this->yearlySalary =getMinimumYearlyIncome();
	}
	else if (yearlySalary >MAXIMUM_YEARLY_INCOME)
		this->yearlySalary = MAXIMUM_YEARLY_INCOME;
	else
	{

		this->yearlySalary = yearlySalary;
	}
}


// Public methods

SalariedEmployee::SalariedEmployee(string name, string jobTitle, double yearlySalary):Employee(name,jobTitle)
{
	setYearlySalary(yearlySalary);
}

double SalariedEmployee::getYearlySalary()
{
	return this->yearlySalary;
}

int SalariedEmployee::getDaysPaid()
{
	return daysPaid;
}

double SalariedEmployee::getDailySalary()
{
	return this->yearlySalary / (5 * 52);
}

// Virtual override method
bool SalariedEmployee::payEmployee()
{
	int daystoPay = getDaysWorked() - daysPaid;
	if (daystoPay<0)
	{
		daysPaid = getDaysWorked();
		Employee::setPaymentReceived(yearlySalary);

		return true;
	}
	else
		return false;
}

// Virtual override method
bool SalariedEmployee::giveEmployeeRaise(double percentage)
{
	if (percentage > 0 && (yearlySalary * (1 + percentage) <= MAXIMUM_YEARLY_INCOME))
	{
		yearlySalary = yearlySalary * (1 + percentage);
		return true;
	}
	else
		return false;
}

// Virtual override method
string SalariedEmployee::getStatusString()
{
	return Employee::getStatusString() + "yearly salary is : " + to_string(yearlySalary);
}
