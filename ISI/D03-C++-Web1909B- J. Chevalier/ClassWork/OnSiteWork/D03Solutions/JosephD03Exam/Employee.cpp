#include "Employee.h"
using namespace std;

// Static fields
const int Employee::WORK_HOURS_PER_YEAR=53*4*12;
const double Employee::MINIMUM_HOURLY_INCOME=12.5;
const double Employee::MAXIMUM_YEARLY_INCOME=250000;
int Employee::instancesCreated=0;
// Static calculated getter methods

double Employee::getMinimumYearlyIncome()
{
	return MINIMUM_HOURLY_INCOME * WORK_HOURS_PER_YEAR;
}

double Employee::getMaximumHourlyIncome()
{
	return MAXIMUM_YEARLY_INCOME / WORK_HOURS_PER_YEAR;
}


// Protected setter method

void Employee::setPaymentReceived(double paymentReceived)
{
	this->paymentReceived = paymentReceived;
	Date today = Date::getToday();
	this->dateLastPaid = new Date(today.getYear(), today.getMonth(), today.getDay());
	if(dateLastPaid!=nullptr)
		dateLastPaid = &today;
	
}

// Public methods

Employee::Employee(string name, string jobTitle)
{
	Employee::instancesCreated++;
	this->id = instancesCreated;
	this->name = name;
	this->jobTitle = jobTitle;
	this->daysWorked = 0;
	this->hoursWorked = 0;
	this->paymentReceived = 0;
	this->dateLastPaid = nullptr;

}

Employee::~Employee()
{
	if (this->dateLastPaid)
		delete[] this->dateLastPaid;
}

int Employee::getId()
{
	return this->id;
}

string Employee::getName()
{
	return this->name;
}

string Employee::getJobTitle()
{
	return this->jobTitle;
}

int Employee::getDaysWorked()
{
	return this->daysWorked;
}

double Employee::getHoursWorked()
{
	return this->hoursWorked;
}

double Employee::getPaymentReceived()
{
	return this->paymentReceived;
}

Date* Employee::getDateLastPaid()
{
	return this->dateLastPaid;
}

bool Employee::logEmployeeHours(double totalHours, int totalDays)
{
	if (totalHours==0&&totalDays==0&& totalHours > totalDays * 24)
		return false;
	this->daysWorked = totalDays;
	this->hoursWorked = totalHours;
	return true;

}

string Employee::toString()
{
	return "ID=" + to_string(this->id) + "  Name: " + this->name + "  Job Title= " + this->jobTitle;

}

// Virtual parent method
string Employee::getStatusString()
{
	if(paymentReceived!=0)
		return "Name : " + this->name + ", Last paid on " + dateLastPaid->toString();
}
