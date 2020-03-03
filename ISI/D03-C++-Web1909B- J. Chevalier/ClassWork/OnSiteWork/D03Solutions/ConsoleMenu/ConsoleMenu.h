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
	ConsoleMenu(string options[], int optionsCount);
	ConsoleMenu(ConsoleMenu& menu);
	~ConsoleMenu();
	int getOptionsCount();
	string getOption(int index);	
	void setOptions(string options[], int optionsCount);	
	void displayOptions();
	int displayAndGetSelection();

};

