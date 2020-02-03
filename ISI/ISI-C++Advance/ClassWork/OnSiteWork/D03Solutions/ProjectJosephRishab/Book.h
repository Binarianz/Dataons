#pragma once
#include "Product.h"
class Book :public Product
{
	string author;
	int year;
	int pageCount;
public:
	Book();
	Book(string, double, double, string, int, int);
	string getAuthor();
	int getYear();
	int GetPageCount();
	string toString();
	void display();
};

