#include "SalariedEmployee.h"
using namespace std;

// Private method

void SalariedEmployee::setYearlySalary(double yearlySalary)
{
	if (yearlySalary < getMinimumYearlyIncome())
		this->yearlySalary = getMinimumYearlyIncome();
	else if (yearlySalary > MAXIMUM_YEARLY_INCOME)
		this->yearlySalary = MAXIMUM_YEARLY_INCOME;
	else
		this->yearlySalary = yearlySalary;
}


// Public methods

SalariedEmployee::SalariedEmployee(string name, string jobTitle, double yearlySalary)
	: Employee(name, jobTitle)
{
	setYearlySalary(yearlySalary);
	this->daysPaid = 0;
}

double SalariedEmployee::getYearlySalary()
{
	return yearlySalary;
}

int SalariedEmployee::getDaysPaid()
{
	return daysPaid;
}

double SalariedEmployee::getDailySalary()
{
	return yearlySalary / (52 * 5);
}

// Virtual override method
bool SalariedEmployee::payEmployee()
{
	bool success = (((this->getDaysWorked() - this->daysPaid) * getDailySalary()) > 0);

	if (success) {
		setPaymentReceived((this->getDaysWorked() - this->daysPaid) * getDailySalary());
		this->daysPaid += (this->getDaysWorked() - this->daysPaid);
	}

	return success;
}

// Virtual override method
bool SalariedEmployee::giveEmployeeRaise(double percentage)
{
	double newYearlySalary = this->yearlySalary + (this->yearlySalary * percentage / 100);

	if (newYearlySalary > this->yearlySalary&& newYearlySalary <= MAXIMUM_YEARLY_INCOME)
	{
		this->yearlySalary = newYearlySalary;
		return true;
	}

	return false;
}

// Virtual override method
string SalariedEmployee::getStatusString()
{
	string employeeDescription = Employee::getStatusString();
	return "[" + employeeDescription 
		+ "[Salaried Employee Class: Days Worked = " + to_string(this->getDaysWorked())
		+ ", Days Paid = " + to_string(this->getDaysPaid())
		+ ", Daily Salary = " + StringConversions::doubleToCurrencyString(getDailySalary())
		+ "]";
}
