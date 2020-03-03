#include "Company.h"
using namespace std;

// Private method

void Company::increaseArrayMaxCapacity(int newArrayMaxCapacity)
{
	this->arrayMaxCapacity = newArrayMaxCapacity;

	Employee** tempArray = this->employeesArray;
	this->employeesArray = new Employee * [this->arrayMaxCapacity];

	for (int i = 0; i < this->employeesCount; i++)
		this->employeesArray[i] = tempArray[i];
	for (int i = this->employeesCount; i < this->arrayMaxCapacity; i++)
		this->employeesArray[i] = nullptr;

	delete[] tempArray;
}


// Public methods

Company::Company()
{
	this->employeesCount = 0;
	this->arrayMaxCapacity = 5;

	this->employeesArray = new Employee*[this->arrayMaxCapacity];

	for (int i = 0; i < this->arrayMaxCapacity; i++)
		this->employeesArray[i] = nullptr;
}

Company::~Company()
{
	for (int i = 0; i < this->arrayMaxCapacity; i++)
		delete this->employeesArray[i];

	delete[] this->employeesArray;
}

int Company::getEmployeesCount()
{
	return employeesCount;
}

Employee* Company::getEmployee(int index)
{
	if (index < 0 && index >= this->employeesCount)
		return nullptr;
	else
		return this->employeesArray[index];
}

int Company::findEmployeeIndex(string name)
{
	for (int i = 0; i < this->employeesCount; i++)
		if (this->employeesArray[i]->getName() == name)
			return i;
	return -1;
}

int Company::findEmployeeIndex(int id)
{
	for (int i = 0; i < this->employeesCount; i++)
		if (this->employeesArray[i]->getId() == id)
			return i;

	return -1;
}

void Company::addEmployee(Employee* employee)
{
	if (this->employeesCount >= this->arrayMaxCapacity) {
		increaseArrayMaxCapacity(this->arrayMaxCapacity += 5);
	}

	this->employeesArray[this->employeesCount] = employee;
	this->employeesCount++;

}

bool Company::removeEmployee(int index)
{
	bool success = getEmployee(index);
	
	if (success) {
		delete this->employeesArray[index];

		for (int i = index; i < this->employeesCount - 1; i++)
			this->employeesArray[i] = this->employeesArray[i + 1];

		this->employeesArray[this->employeesCount] = nullptr;
		this->employeesCount--;
	}

	return success;

}

string Company::toString()
{
	return "[Company Class: Number of Employees = " + to_string(this->employeesCount)
		+ ", Max Capacity = " + to_string(arrayMaxCapacity) + "]";
}
