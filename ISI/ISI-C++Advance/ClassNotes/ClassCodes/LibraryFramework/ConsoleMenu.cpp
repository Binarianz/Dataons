#include "ConsoleMenu.h"
using namespace std;

// Setter constructor
ConsoleMenu::ConsoleMenu(string title, string message, string* optionsArray, int optionsCount)
{
	setTitle(title);
	setMessage(message);

	this->optionsArray = nullptr;
	this->optionsCount = 0;
	setOptions(optionsArray, optionsCount);
}

// Copy constructor
ConsoleMenu::ConsoleMenu(const ConsoleMenu& rhs)
	: ConsoleMenu(rhs.title, rhs.message, rhs.optionsArray, rhs.optionsCount) // Call to setter constructor
{ }

// Destructor
ConsoleMenu::~ConsoleMenu()
{
	if (optionsArray != nullptr)
		delete[] optionsArray;
}

string ConsoleMenu::getTitle()
{
	return title;
}

string ConsoleMenu::getMessage()
{
	return message;
}

string ConsoleMenu::getOption(int index)
{
	if (index >= 0 && index < optionsCount)
		return optionsArray[index];
	else
		return "";
}

int ConsoleMenu::getOptionsCount()
{
	return optionsCount;
}

void ConsoleMenu::setTitle(string title)
{
	this->title = title;
}

void ConsoleMenu::setMessage(string message)
{
	this->message = message;
}

void ConsoleMenu::setOptions(string* optionsArray, int optionsCount)
{
	if (this->optionsArray != nullptr)
		delete[] this->optionsArray;
	
	if (optionsCount > 0)
	{
		this->optionsArray = new string[optionsCount];
		this->optionsCount = optionsCount;

		for (int i = 0; i < optionsCount; i++)
			this->optionsArray[i] = optionsArray[i];
	}
	else
	{
		this->optionsArray = nullptr;
		this->optionsCount = 0;
	}
}

void ConsoleMenu::displayTitle()
{
	cout << title << endl << endl;
}

void ConsoleMenu::displayMessage()
{
	if (message.length() > 0)
		cout << message << endl << endl;
}

void ConsoleMenu::displayOptions()
{
	for (int i = 0; i < optionsCount; i++)
		cout << "    " << (i + 1) << " - " << optionsArray[i] << endl;
	cout << endl;
}

int ConsoleMenu::getUserSelection()
{
	displayTitle();
	displayOptions();
	
	int min = 1;
	int max = optionsCount;
	
	int userInt;
	if (message.length() > 0)
		userInt = readInt(message, min, max);
	else
		userInt = readInt(min, max);

	return userInt;					// return option number (one-based numbering)
}

int ConsoleMenu::getUserSelectionIndex()
{
	return getUserSelection() - 1;	// return array index (zero-based numbering)
}
