#include "Employee.h"
using namespace std;

// Static fields
const int Employee::WORK_HOURS_PER_YEAR = 2080;
const double Employee::MINIMUM_HOURLY_INCOME = 12.50;
const double Employee::MAXIMUM_YEARLY_INCOME = 250000.00;
int Employee::instancesCreated = 0;

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
	
	Date todaysDate = Date::getToday();

	if (this->dateLastPaid != nullptr)
		delete this->dateLastPaid;

	this->dateLastPaid = new Date(todaysDate);
}


// Public methods

Employee::Employee(string name, string jobTitle)
{	

	// Increment this whenever the  constructor is called....
	this->id = ++this->instancesCreated; // check if this works....
	this->name = name;
	this->jobTitle = jobTitle;
	this->daysWorked = 0;
	this->hoursWorked = 0;
	this->paymentReceived = 0;
	this->dateLastPaid = nullptr;
}

Employee::~Employee()
{
	delete this->dateLastPaid;
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
	return daysWorked;
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
	if (totalHours >= 0 && totalDays >= 0 && totalHours <= (totalDays * 24)) {
		this->daysWorked = totalDays;
		this->hoursWorked = totalHours;
		return true;
	}
	return false;
}

string Employee::toString()
{
	return "[Employee Class: Id = " + to_string(this->id)
		+ ", Name = " + this->name
		+ ", Job Title = " + this->jobTitle + "]";
}

// Virtual parent method
string Employee::getStatusString()
{
	return "[Employee Class: Payment received = " + StringConversions::doubleToCurrencyString(this->paymentReceived)
		+ ", Date Last Paid = " + ((this->dateLastPaid != nullptr) ? dateLastPaid->toString() : "Not Paid yet")
		+ "]";
}
