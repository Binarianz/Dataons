#pragma once
#include "Book.h"
class Magazine :
	public Book
{
public:
	Magazine();
	Magazine(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount);
	string toString();
	void display();
};

