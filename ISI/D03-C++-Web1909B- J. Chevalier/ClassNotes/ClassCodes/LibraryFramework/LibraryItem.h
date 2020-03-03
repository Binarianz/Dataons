#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class LibraryItem
{
private:
	static long long instancesCreated;

	int referenceNumber;
	string title;
	bool borrowed;
	string* borrowerName;
	Date* dueDate;

public:
	LibraryItem(string title);
	LibraryItem(const LibraryItem& rhs);
	~LibraryItem();

	int getReferenceNumber();
	string getTitle();
	bool isBorrowed();
	string* getBorrowerName();
	Date* getDueDate();

	bool isOverdue();
	virtual double getLateFee();

	virtual bool borrowItem(string borrowerName);
	virtual bool returnItem();

	virtual string toString();
	virtual string getStatusString();
	void display();
	void displayStatusString();
};