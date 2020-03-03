#pragma once
#include <iostream>
#include <string>
#include "LibraryItem.h"
using namespace std;

class Library
{
private:
	LibraryItem** items;
	int itemsCount;
	int maxItemsCount;

	void expandArray(int maxItemsCount);

public:
	Library();
	~Library();

	LibraryItem* getItem(int index);
	int getItemsCount();
	int getMaxItemsCount();

	int getBorrowedCount();

	int getItemIndex(int referenceNumber);
	int getItemIndex(string title);

	void addItem(LibraryItem* item);
	bool removeItem(int index);

	string toString();
	void display();
};