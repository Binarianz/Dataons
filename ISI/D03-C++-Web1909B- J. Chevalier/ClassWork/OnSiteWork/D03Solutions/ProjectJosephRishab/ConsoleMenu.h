#pragma once
#include<iostream>
#include<string>
using namespace std;
class ConsoleMenu
{
private:
	string* optionsArray;
	int optionsCount;
public:

	// Constructor/Destructor....
	ConsoleMenu(string[], int); // Setter contructor...
	ConsoleMenu(ConsoleMenu& menu); // Copy constructor...
	~ConsoleMenu();

	//Getter methods....
	int getOptionsCount();
	string getOptions(int index);

	//Setter methods....
	void setOptions(string[], int);

	//User interface methods....
	void displayOptions();
	int displayAndGetSelection();
};