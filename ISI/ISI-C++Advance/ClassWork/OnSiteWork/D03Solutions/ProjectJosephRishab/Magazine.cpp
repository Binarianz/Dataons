#include "Magazine.h"
#include "Book.h"
Magazine::Magazine() :Book()
{
}
Magazine::Magazine(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount)
	: Book(title, buyingPrice, sellingPrice, author, year, pageCount)
{

}

string Magazine::toString()
{
	return string();
}

void Magazine::display()
{
}