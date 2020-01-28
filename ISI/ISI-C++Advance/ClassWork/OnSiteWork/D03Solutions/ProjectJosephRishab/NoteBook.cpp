#include "NoteBook.h"
#include "Book.h"
NoteBook::NoteBook() :Book()
{
}
NoteBook::NoteBook(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount)
	: Book(title, buyingPrice, sellingPrice, author, year, pageCount)
{

}

string NoteBook::toString()
{
	return string();
}

void NoteBook::display()
{
}