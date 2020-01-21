#include "LibraryItem.h"
using namespace std;

long long LibraryItem::instancesCreated = 0;

LibraryItem::LibraryItem(string title)
{
	cout << "TODO:  LibraryItem(string title) setter constructor" << endl;
}

LibraryItem::LibraryItem(const LibraryItem& rhs)
{
	cout << "TODO:  LibraryItem(const LibraryItem& rhs) copy constructor" << endl;
}

LibraryItem::~LibraryItem()
{
	cout << "TODO:  ~LibraryItem() destructor" << endl;
}

int LibraryItem::getReferenceNumber()
{
	cout << "TODO:  LibraryItem::getReferenceNumber()" << endl;
	return 0;
}

string LibraryItem::getTitle()
{
	cout << "TODO:  LibraryItem::getTitle()" << endl;
	return "";
}

bool LibraryItem::isBorrowed()
{
	cout << "TODO:  LibraryItem::isBorrowed()" << endl;
	return false;
}

string* LibraryItem::getBorrowerName()
{
	cout << "TODO:  LibraryItem::getBorrowerName()" << endl;
	return nullptr;
}

Date* LibraryItem::getDueDate()
{
	cout << "TODO:  LibraryItem::getDueDate()" << endl;
	return nullptr;
}

bool LibraryItem::isOverdue()
{
	cout << "TODO:  LibraryItem::isOverdue()" << endl;
	return false;
}

// Virtual parent method
double LibraryItem::getLateFee()
{
	cout << "TODO:  LibraryItem::getLateFee(): Virtual parent method" << endl;
	return 0;
}

// Virtual parent method
bool LibraryItem::borrowItem(string borrowerName)
{
	cout << "TODO:  LibraryItem::borrowItem(string borrowerName): Virtual parent method" << endl;
	return false;
}

// Virtual parent method
bool LibraryItem::returnItem()
{
	cout << "TODO:  LibraryItem::returnItem(): Virtual parent method" << endl;
	return false;
}

// Virtual parent method
string LibraryItem::toString()
{
	cout << "TODO:  LibraryItem::toString(): Virtual parent method" << endl;
	return "";
}

// Virtual parent method
string LibraryItem::getStatusString()
{
	cout << "TODO:  LibraryItem::getStatusString(): Virtual parent method" << endl;
	return "";
}

void LibraryItem::display()
{
	cout << "TODO:  LibraryItem::display()" << endl;
}

void LibraryItem::displayStatusString()
{
	cout << "TODO:  LibraryItem::displayStatusString()" << endl;
}
