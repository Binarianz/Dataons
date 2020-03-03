#pragma once
#include "Book.h"
class Novel :
	public Book
{
public:
	Novel();
	Novel(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount);
	string toString();
	void display();

};

