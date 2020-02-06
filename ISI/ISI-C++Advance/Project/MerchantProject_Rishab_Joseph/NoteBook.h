#pragma once
#include "Book.h"
class NoteBook :
	public Book
{
public:
	NoteBook();
	NoteBook(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount);
	string toString();
	void display();
};

