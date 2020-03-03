#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class LibraryItem
{
private:
	
	static long long instancesCreated;

	int referenceNumber;//unique id
	string title;
	bool borrowed;
	string* borrowerName;
	Date* dueDate;

public:
	//constructer / destructor
	LibraryItem();
	LibraryItem(string title);
	LibraryItem(const LibraryItem& rhs);
	~LibraryItem();//delete dynamic data allocated data 
	// Field getter methods
	int getReferenceNumber();
	string getTitle();
	bool isBorrowed();
	string* getBorrowerName();
	Date* getDueDate();
	int getDaysOverDue();
	//calcualted getter methods
	bool isOverdue();
	virtual double getLateFee();
	//Action methods
	virtual bool borrowItem(string borrowerName);
	virtual bool returnItem();

	virtual string toString();
	virtual string getStatusString();
	void display();
	void displayStatusString();
};