#include "UnruledNotebook.h"
#include"NoteBook.h"
UnruledNotebook::UnruledNotebook() :NoteBook()
{
}

UnruledNotebook::UnruledNotebook(string title, double buyingPrice, double sellingPrice, string author, int year, int pageCount)
	: NoteBook(title, buyingPrice, sellingPrice, author, year, pageCount)
{
}

string UnruledNotebook::toString()
{
	return NoteBook::toString();
}

void UnruledNotebook::display()
{
	cout << toString() << endl;
}