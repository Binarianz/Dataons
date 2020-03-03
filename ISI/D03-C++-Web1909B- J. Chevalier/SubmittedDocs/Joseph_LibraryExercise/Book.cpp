#include "Book.h"
using namespace std;
Book::Book()
{
}

Book::Book(string title,string author, int pageCount):LibraryItem(title)
{
	this->author = author;
	this->pageCount = pageCount;
	this->timesRead = 0;
	this->dateLastRead = nullptr;
}

Book::~Book()
{
	if (this->dateLastRead != nullptr)
		delete dateLastRead;
}

string Book::getAuthor()
{
	return author;
}

int Book::getPageCount()
{
	return pageCount;
}

int Book::getTimesRead()
{
	return timesRead;
}

Date* Book::getDateLastRead()
{
	return this->dateLastRead;
}

string Book::toString()
{
	string librarystring = LibraryItem::toString();
	return librarystring+"Author = " + author + "Page count = " + to_string(pageCount) +
		"times read = " + to_string(pageCount) + "last date read = " + dateLastRead->toString();
}

void Book::read()
{
	this->timesRead += this->timesRead;
	if (dateLastRead != nullptr)
		delete dateLastRead;
	dateLastRead = new Date(Date::getToday());
	//Date today = Date::getToday();

	//this->dateLastRead = &dateLastRead->getToday();
}

void Book::display()
{
	cout << this->toString();
}
