#include "ConsoleMenu.h"
using namespace std;

ConsoleMenu::ConsoleMenu(string options[], int optionsCount)
{
	optionsCount = 0;
	optionsArray = nullptr;
	setOptions(options,optionsCount);
}

ConsoleMenu::ConsoleMenu(ConsoleMenu& menu)
	: ConsoleMenu(menu.optionsArray, menu.optionsCount)
{ }

ConsoleMenu::~ConsoleMenu()
{
	delete[] optionsArray;
}

int ConsoleMenu::getOptionsCount()
{
	return this->optionsCount;
}


string ConsoleMenu::getOption(int index)
{
	if (index < optionsCount && index >= 0)
		return optionsArray[index];
	else
		return "";
}

void ConsoleMenu::setOptions(string options[], int optionsCount)
{
	if (optionsArray != nullptr)
		delete[] optionsArray;
	this->optionsCount = optionsCount;
	this->optionsArray = new string[optionsCount];
	for (int i = 0; i < optionsCount; i++)
	{
		this->optionsArray[i] = options[i];
	}
}


void ConsoleMenu::displayOptions()
{
	for (int i = 0; i < this->optionsCount; i++)
	{
		cout <<i+1<<". "<< optionsArray[i] << endl;
	}
}
int readInt()
{
	int inputInt = 0;
	cin >> inputInt;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Warning - please enter a valid value !: ";
		cin >> inputInt;
	}
	return inputInt;
}
int readInt(int min, int max)
{
	int temp = readInt();
	while (temp != NULL)
	{
		if (temp >= min && temp <= max)
		{
			return temp;
		}
		cout << "error,Please reenter the int value : ";
		temp = readInt();
	}

}
int ConsoleMenu::displayAndGetSelection()
{
	this->displayOptions();
	cout << "\nEnter the option : ";
	int index = readInt(1,this->optionsCount);
	return index;
}
