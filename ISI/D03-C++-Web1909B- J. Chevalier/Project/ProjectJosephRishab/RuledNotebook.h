#pragma once
#include "NoteBook.h"
class RuledNotebook :
	public NoteBook
{
public:
	RuledNotebook();
	RuledNotebook(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount);
	string toString();
	void display();
};

