#include "LibraryItem.h"
using namespace std;

long long LibraryItem::instancesCreated = 0;

LibraryItem::LibraryItem(string title)
{
	LibraryItem::instancesCreated++;
	this->referenceNumber = instancesCreated;
	this->title = title;
	this->borrowed = 0;
	this->borrowerName = nullptr;
	this->dueDate = nullptr;

	//out << "TODO:  LibraryItem(string title) setter constructor" << endl;
}

LibraryItem::LibraryItem(const LibraryItem& rhs)
	:LibraryItem(rhs.title)
{
	this->borrowed = rhs.borrowed;
	if (rhs.borrowerName != nullptr)
		this->borrowerName = new string(*rhs.borrowerName);
	if (rhs.dueDate != nullptr)
		this->dueDate = new Date(*rhs.dueDate);

	//cout << "TODO:  LibraryItem(const LibraryItem& rhs) copy constructor" << endl;
}

LibraryItem::~LibraryItem()
{
	if(this->borrowerName !=nullptr)
		delete[] this->borrowerName;
	if (this->dueDate)
		delete[] this->dueDate;
	//cout << "TODO:  ~LibraryItem() destructor" << endl;
}

int LibraryItem::getReferenceNumber()
{
	return this->referenceNumber;
}

string LibraryItem::getTitle()
{
	return this->title;
}

bool LibraryItem::isBorrowed()
{
	return this->borrowed;
}

string* LibraryItem::getBorrowerName()
{
	return this->borrowerName;
}

Date* LibraryItem::getDueDate()
{
	return this->dueDate;
}

int LibraryItem::getDaysOverDue()
{
	Date today = Date::getToday();
	int daysOverDue;
	if (dueDate != nullptr)
		daysOverDue = (*dueDate).getDaysUntil(&today);
	else
		daysOverDue = 0;
	return daysOverDue;
}
bool LibraryItem::isOverdue()
{
//if (borrowed)
//{
//	Date today = Date::getToday();
//	int daysOverDue = (*dueDate).getDaysUntil(&today);
//	return(daysOverDue > 0);
//}
//else
//{
//	return false;
//}
	return (borrowed) ? (getDaysOverDue() > 0) : false;
	//calling static method;
	//int year = today.getYear();
	//int month = today.getMonth();
	//int day = today.getDay();
	//if (year > dueDate->getYear() || month > dueDate->getMonth() || day > dueDate->getDay())
	//{
	//	return true;
	//}
	//return false;
}

// Virtual parent method
double LibraryItem::getLateFee()
{
	int daysOverDue = getDaysOverDue();
	double lateFee = 0;
	if (daysOverDue < 0)
	{
		double lateFeePerDay = 2.5;
		lateFee = daysOverDue * lateFeePerDay;
	}
	else
	{
		return lateFee;
	}
}

// Virtual parent method
bool LibraryItem::borrowItem(string borrowerName)
{
	bool success= !this->borrowed;
	//okay to apply action
	if (success)
	{
		
		this->borrowed = true;
		this->borrowerName = new string(borrowerName);
		Date today = Date::getToday();//calling static method;
		int year = today.getYear();
		int month = today.getMonth();
		int day = today.getDay();
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
		this->dueDate = new Date(year, month, day);
	}
	//else
	//{
	//	cout << "error";
	//}
	return success;
}

// Virtual parent method
bool LibraryItem::returnItem()
{
	bool success = this->borrowed;
	//okay to apply action
	if (success)
	{
		this->borrowed = false;
		delete this->borrowerName;
		this->borrowerName = nullptr;
		//this->borrowerName = new string(borrowerName);
		delete this->dueDate;
		this->dueDate = nullptr;
		//this->dueDate = new Date(year, month, day);
	}

	//cout << "TODO:  LibraryItem::returnItem(): Virtual parent method" << endl;
	return success;
}

// Virtual parent method
string LibraryItem::toString()
{
	return "Library item #" + to_string(referenceNumber) + " '" + title + "'";

}

// Virtual parent method
string LibraryItem::getStatusString()
{
	if (borrowed)
		return "Borrowed by" + *borrowerName + ", Due on " + dueDate->toString();
	else
		return "Availble;";
}

void LibraryItem::display()
{
	cout << toString() << endl;
}

void LibraryItem::displayStatusString()
{
	cout << getStatusString() << endl;
}
