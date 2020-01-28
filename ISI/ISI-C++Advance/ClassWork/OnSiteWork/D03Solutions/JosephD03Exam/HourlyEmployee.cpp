#include "HourlyEmployee.h"
using namespace std;

// Private method

void HourlyEmployee::setHourlyWage(double hourlyWage)
{
	if (hourlyWage < getMaximumHourlyIncome())
	{
		this->hourlyWage = getMaximumHourlyIncome();
	}
	else if (hourlyWage > MINIMUM_HOURLY_INCOME)
		this->hourlyWage = MINIMUM_HOURLY_INCOME;
	else
	{

		this->hourlyWage = hourlyWage;
	}
}


// Public methods

HourlyEmployee::HourlyEmployee(string name, string jobTitle, double hourlyWage) :Employee(name, jobTitle)
{
	setHourlyWage(hourlyWage);
}

double HourlyEmployee::getHourlyWage()
{
	return this->hourlyWage;
}

double HourlyEmployee::getHoursPaid()
{
	return this->hoursPaid;
}

// Virtual override method
bool HourlyEmployee::payEmployee()
{
	double hourstopay = getHoursWorked() - hoursPaid;
	if (hourstopay > 0)
	{
		hoursPaid = getHoursWorked();
		Employee::setPaymentReceived(hoursPaid);
		return true;
	}
	else
		return false;
}

// Virtual override method
bool HourlyEmployee::giveEmployeeRaise(double percentage)
{
	if (percentage > 0 && (hourlyWage * (1 + percentage) <= getMaximumHourlyIncome()))
	{
		hourlyWage = hourlyWage * (1 + percentage);
		return true;
	}
	else
		return false;
}

// Virtual override method
string HourlyEmployee::getStatusString()
{
	return Employee::getStatusString() + "Hourly salary is : " + to_string(hourlyWage);
}
