#include "Book.h"
Book::Book()
{
}

Book::Book(string  title, double buyingPrice, double sellingPrice, string author, int year, int pageCount)
	: Product(title, buyingPrice, sellingPrice)
{
	this->author = author;
	this->year = year;
	this->pageCount = pageCount;
}
string Book::getAuthor()
{
	return this->author;
}
int Book::getYear()
{
	return this->year;
}
int Book::GetPageCount()
{
	return this->pageCount;
}


string Book::toString() 
{
	string productDescription = Product::toString();
	return productDescription+" author : " + this->getAuthor() + " Year : " + to_string(this->getYear()) + " Page Count : " + to_string(this->GetPageCount())+" ]";
}

void Book::display() 
{
	cout << toString() << endl;
}
