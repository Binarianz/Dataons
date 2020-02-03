#include "RuledNotebook.h"
#include"NoteBook.h"
RuledNotebook::RuledNotebook() :NoteBook()
{
}

RuledNotebook::RuledNotebook(string title, double buyingPrice, double sellingPrice, string author, int year, int pageCount)
	:NoteBook(title, buyingPrice, sellingPrice, author, year, pageCount)
{
}

string RuledNotebook::toString()
{
	return NoteBook::toString();
}

void RuledNotebook::display()
{
	cout << toString() << endl;
}
