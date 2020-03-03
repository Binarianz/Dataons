#pragma once
#include "NoteBook.h"
class UnruledNotebook :
	public NoteBook
{
public:
	UnruledNotebook();
	UnruledNotebook(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount);
	string toString();
	void display();
};
