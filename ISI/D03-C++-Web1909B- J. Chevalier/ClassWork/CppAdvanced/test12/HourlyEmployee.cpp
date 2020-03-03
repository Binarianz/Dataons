#include "HourlyEmployee.h"
using namespace std;

// Private method

void HourlyEmployee::setHourlyWage(double hourlyWage)
{
	if (hourlyWage < MINIMUM_HOURLY_INCOME)
		this->hourlyWage = MINIMUM_HOURLY_INCOME;
	else if (hourlyWage > getMaximumHourlyIncome())
		this->hourlyWage = getMaximumHourlyIncome();
	else
		this->hourlyWage = hourlyWage;
}


// Public methods

HourlyEmployee::HourlyEmployee(string name, string jobTitle, double hourlyWage)
	: Employee(name, jobTitle)
{
	this->hoursPaid = 0;
	setHourlyWage(hourlyWage);
}

double HourlyEmployee::getHourlyWage()
{
	return hourlyWage;
}

double HourlyEmployee::getHoursPaid()
{
	return hoursPaid;
}

// Virtual override method
bool HourlyEmployee::payEmployee()
{
	bool success = (((this->getHoursWorked() - this->hoursPaid) * hourlyWage) > 0);
	if (success) {
		setPaymentReceived((this->getHoursWorked() - this->hoursPaid) * hourlyWage);
		this->hoursPaid += (this->getHoursWorked() - this->hoursPaid);
	}

	return success;
}

// Virtual override method
bool HourlyEmployee::giveEmployeeRaise(double percentage)
{
	double newHourlyWage= this->hourlyWage + (this->hourlyWage * percentage / 100);

	if (newHourlyWage > this->hourlyWage && newHourlyWage <= getMaximumHourlyIncome())
	{
		this->hourlyWage = newHourlyWage;
		return true;
	}

	return false;
}

// Virtual override method
string HourlyEmployee::getStatusString()
{
	string employeeDescription = Employee::getStatusString();

	return  "[" + employeeDescription
		+ "[Hourly Employee Class: Hours Worked = " + StringConversions::doubleToString(this->getHoursWorked())
		+ ", Hours Paid = " + StringConversions::doubleToString(this->hoursPaid)
		+ ", Hourly Wage = " + StringConversions::doubleToCurrencyString(this->hourlyWage) 
		+ "]";
}
