#pragma once
#include <iostream>
#include <string>
#include "Library.h"
#include "ConsoleInput.h"
#include "ConsoleMenu.h"
using namespace std;

class LibraryController
{
private:
	Library* library;
	string separator;

	void mainMenu();
	void addItemMenu();
	void removeItemMenu();
	void borrowItemMenu();
	void returnItemMenu();
	void displayAllItemsMenu();

	void allocateItemStringsArray(string** itemStrings, int* itemsCount);

public:
	LibraryController(Library* library);
	void start();
};