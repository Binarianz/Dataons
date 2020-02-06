#include "Novel.h"
#include"Book.h"
Novel::Novel():Book()
{
}
Novel::Novel(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount)
	:Book(title,buyingPrice,sellingPrice,author,year,pageCount)
{

}

string Novel::toString()
{
	return Book::toString();
}

void Novel::display()
{
	cout << toString() << endl;
}