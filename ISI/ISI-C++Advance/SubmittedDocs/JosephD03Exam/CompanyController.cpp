#include "CompanyController.h"
using namespace std;

// Private methods

void CompanyController::mainMenu()
{
	string title = separator + "Company: Main menu";
	string message = "Select action:";
	const int optionsCount = 7;
	string options[optionsCount] =
	{
		"Add employee",
		"Remove employee",
		"Log employee hours",
		"Pay employee",
		"Give employee raise",
		"Display all employees",
		"Exit"
	};

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);

	while (true)
	{
		int selection = menu.getUserSelection();
		cout << endl;

		switch (selection)
		{
		case 1:
			addEmployeeMenu();
			break;
		case 2:
			removeEmployee();
			break;
		case 3:
			logEmployeeHoursMenu();
			break;
		case 4:
			payEmployeeMenu();
			break;
		case 5:
			giveEmployeeRaiseMenu();
			break;
		case 6:
			displayAllEmployeesMenu();
			break;
		case 7:
			return;
		}
	}
}

void CompanyController::addEmployeeMenu()
{
	string title = separator + "Company action: Add employee";
	string message = "Select employee type:";
	const int optionsCount = 2;
	string options[optionsCount] =
	{
		"Salaried employee",
		"Hourly employee"
	};

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	
	int employeeType = menu.getUserSelection();
	cout << endl;
	string name = readLine("Enter name:");
	cout << endl;
	string jobTitle = readLine("Enter job title:");
	cout << endl;

	Employee* employee = nullptr;

	if (employeeType == 1) // Salaried employee
	{
		double yearlySalary = readDouble("Enter yearly salary:");
		cout << endl;

		employee = new SalariedEmployee(name, jobTitle, yearlySalary);
	}
	else // Hourly employee
	{
		double hourlyWage = readDouble("Enter hourly wage:");
		cout << endl;

		employee = new HourlyEmployee(name, jobTitle, hourlyWage);
	}

	company->addEmployee(employee);

	cout << "Successfully added employee #" << employee->getId()
		<< " " << employee->getName() << " to company" << endl << endl;

	displayEmployeeStatus(employee);
	cin.get();
}

void CompanyController::removeEmployee()
{
	if (company->getEmployeesCount() < 1)
	{
		cout << "Error: Cannot remove employee because company has no employees" << endl;
		cin.get();
		return;
	}

	string title = separator + "Company action: Remove employee";
	string message = "Select employee to remove:";
	string* options = nullptr;
	int optionsCount = 0;
	allocateEmployeeStringsArray(&options, &optionsCount);

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it

	int selectionIndex = menu.getUserSelectionIndex();
	cout << endl;

	Employee* employee = company->getEmployee(selectionIndex);
	int id = employee->getId();
	string name = employee->getName();

	bool success = company->removeEmployee(selectionIndex);

	if (success)
		cout << "Successfully removed employee #" << id
			<< " " << name << " from company" << endl;
	else
		cout << "Failed to remove employee #" << id
		<< " " << name << " from company" << endl;

	cin.get();
}

void CompanyController::logEmployeeHoursMenu()
{
	if (company->getEmployeesCount() < 1)
	{
		cout << "Error: Cannot log hours because company has no employees" << endl;
		cin.get();
		return;
	}

	string title = separator + "Company action: Log employee hours";
	string message = "Select employee:";
	string* options = nullptr;
	int optionsCount = 0;
	allocateEmployeeStringsArray(&options, &optionsCount);

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it

	int selectionIndex = menu.getUserSelectionIndex();
	cout << endl;
	Employee* employee = company->getEmployee(selectionIndex);

	int totalDays = readInt("Enter number of days worked:", 1, 365);
	cout << endl;
	double hoursPerDay = readDouble("Enter number of hours worked per day:", 0, 24);
	cout << endl;
	double totalHours = hoursPerDay * totalDays;
	
	bool success = employee->logEmployeeHours(totalHours, totalDays);
	
	if (success)
	{
		cout << "Successfully logged hours for employee #"
			<< employee->getId() << " " << employee->getName() << ": "
			<< StringConversions::doubleToString(totalHours)
			<< " hours worked over " << to_string(totalDays)
			<< " days" << endl << endl;

		displayEmployeeStatus(employee);
	}
	else
		cout << "Error: Failed to log hours for employee #"
			<< employee->getId() << " " << employee->getName() << endl << endl;

	cin.get();
}

void CompanyController::payEmployeeMenu()
{
	if (company->getEmployeesCount() < 1)
	{
		cout << "Error: Cannot pay employee because company has no employees" << endl;
		cin.get();
		return;
	}

	string title = separator + "Company action: Pay employee";
	string message = "Select employee:";
	string* options = nullptr;
	int optionsCount = 0;
	allocateEmployeeStringsArray(&options, &optionsCount);

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it

	int selectionIndex = menu.getUserSelectionIndex();
	cout << endl;
	Employee* employee = company->getEmployee(selectionIndex);

	double previousAmountPaid = employee->getPaymentReceived();
	bool success = employee->payEmployee();
	double amountPaid = employee->getPaymentReceived() - previousAmountPaid;

	if (success)
	{
		cout << "Successfully paid employee #"
			<< employee->getId() << " " << employee->getName() << ": "
			<< StringConversions::doubleToCurrencyString(amountPaid)
			<< " paid" << endl << endl;

		displayEmployeeStatus(employee);
	}
	else
		cout << "Error: Failed to pay employee #"
			<< employee->getId() << " " << employee->getName() << endl;

	cin.get();
}

void CompanyController::giveEmployeeRaiseMenu()
{
	if (company->getEmployeesCount() < 1)
	{
		cout << "Error: Cannot give raise because company has no employees" << endl;
		cin.get();
		return;
	}

	string title = separator + "Company action: Give employee raise";
	string message = "Select employee:";
	string* options = nullptr;
	int optionsCount = 0;
	allocateEmployeeStringsArray(&options, &optionsCount);

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it

	int selectionIndex = menu.getUserSelectionIndex();
	cout << endl;
	Employee* employee = company->getEmployee(selectionIndex);

	double percentage = readDouble("Enter percentage:");
	cout << endl;

	bool success = employee->giveEmployeeRaise(percentage);
	
	if (success)
	{
		cout << "Successfully gave " << StringConversions::doubleToString(percentage)
			<< "% raise to employee #" << employee->getId() << " " << employee->getName() << endl << endl;

		displayEmployeeStatus(employee);
	}
	else
		cout << "Error: Failed to give raise to employee #"
			<< employee->getId() << " " << employee->getName() << endl;
	
	cin.get();
}

void CompanyController::displayAllEmployeesMenu()
{
	cout << separator << "Company action: Display all employees" << endl << endl;
	cout << company->toString() << endl;
	for (int i = 0; i < company->getEmployeesCount(); i++)
	{
		Employee* employee = company->getEmployee(i);
		cout << endl << "    " << employee->toString();
		cout << endl << "        " << employee->getStatusString() << endl;
	}
	cin.get();
}

void CompanyController::displayEmployeeStatus(Employee* employee)
{
	cout << employee->toString() << ":" << endl
		<< "    " + employee->getStatusString() << endl;
}

void CompanyController::allocateEmployeeStringsArray(string** employeeStrings, int* employeesCount)
{
	int count = company->getEmployeesCount();

	if (count > 0)
	{
		*employeeStrings = new string[count];
		for (int i = 0; i < count; i++)
		{
			Employee* employee = company->getEmployee(i);
			*((*employeeStrings) + i) = employee->toString();
		}
	}
	else
	{
		count = 0;
		*employeeStrings = nullptr;
	}

	*employeesCount = count;
}


// Public methods

CompanyController::CompanyController(Company* company)
{
	this->company = company;
	this->separator = "-------------------------\n";
}

void CompanyController::start()
{
	mainMenu();
}
