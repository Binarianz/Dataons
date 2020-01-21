#pragma once
#include <iostream>
#include <string>
#include "ConsoleInput.h"
using namespace std;

class ConsoleMenu
{
private:
	string title;
	string message;
	string* optionsArray;
	int optionsCount;

public:
	ConsoleMenu(string title, string message, string* optionsArray, int optionsCount);
	ConsoleMenu(const ConsoleMenu& rhs);
	~ConsoleMenu();
	string getTitle();
	string getMessage();
	string getOption(int index);
	int getOptionsCount();
	void setTitle(string title);
	void setMessage(string message);
	void setOptions(string* optionsArray, int optionsCount);
	void displayTitle();
	void displayMessage();
	void displayOptions();
	int getUserSelection();
	int getUserSelectionIndex();
};