#pragma once
#include <iostream>
#include <string>
#include"LibraryItem.h"
#include"Date.h"
using namespace std;
class Book:public LibraryItem
{
private:
	string author;
	int pageCount;
	int timesRead;
	Date* dateLastRead;
public:
	Book();
	Book(string title,string author, int pageCount);
	~Book();
	string getAuthor();
	int getPageCount();
	int getTimesRead();
	Date* getDateLastRead();
	virtual  string toString();
	void read();
	void display();
};

