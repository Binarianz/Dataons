#include "Company.h"
using namespace std;

// Private method

void Company::increaseArrayMaxCapacity(int newArrayMaxCapacity)
{


}


// Public methods

Company::Company()
{
	employeesArray = new Employee * [arrayMaxCapacity];
	for (int i = 0; i < arrayMaxCapacity; i++)
	{
		employeesArray[i] = nullptr;
	}
	this->employeesCount = 0;
	this->arrayMaxCapacity = 5;

}

Company::~Company()
{
	delete[] employeesArray;
}

int Company::getEmployeesCount()
{
	return this->employeesCount;
}

Employee* Company::getEmployee(int index)
{
	if (index < employeesCount && index>0)
		return employeesArray[index];
	else
		return nullptr;
}

int Company::findEmployeeIndex(string name)
{
	for (int i = 0; i < employeesCount; i++)
	{
		if (employeesArray[i]->getName() == name)
			return i;
	}
	return -1;
}

int Company::findEmployeeIndex(int id)
{
	for (int i = 0; i < employeesCount; i++)
	{
		if (employeesArray[i]->getId() == id)
			return i;
	}
	return -1;
}

void Company::addEmployee(Employee* employee)
{
	if (employeesCount == arrayMaxCapacity)
	{
		arrayMaxCapacity += 5;
		employeesCount = 0;
		Employee** tempArray = new Employee* [arrayMaxCapacity];
		for (int i = 0; i < arrayMaxCapacity; i++)
		{
			tempArray[i] = employeesArray[i];
			employeesCount++;
		}
		employeesArray[employeesCount] = employee;
		employeesCount++;
		delete[] tempArray;
	}
	else 
	{
		employeesArray[employeesCount + 1] = employee;

	}
	

}

bool Company::removeEmployee(int index)
{
	if (index < employeesCount && index>0 && employeesArray[index] != nullptr)
	{
		delete employeesArray[index];
		employeesCount--;
		employeesArray[index] = nullptr;
		for (int i = index; i < arrayMaxCapacity; i++)
		{
			swap(employeesArray[index], employeesArray[index + 1]);
		}
		return true;
	}
	return false;
	
}

string Company::toString()
{
	return "next";
}
