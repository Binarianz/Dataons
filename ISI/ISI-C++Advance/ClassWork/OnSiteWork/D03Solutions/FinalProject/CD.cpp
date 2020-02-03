#include "CD.h"

CD::CD() :Disc()
{

}
CD::CD(string  title, double buyingPrice, double sellingPrice, string artist, int duration, int year)
	: Disc(title,buyingPrice,sellingPrice,artist,duration,year)
{

}
string CD::toString()
{
	//return "[ Title : " + this->getTitle() + " Buying Price : " + StringConversions::doubleToCurrencyString(this->getBuyingPrice()) + " Selling Price : " + StringConversions::doubleToCurrencyString(this->getSellingPrice()) + " author : " + this->getAuthor() + " Year : " + to_string(this->getYear()) + " Year : " + to_string(this->GetPageCount())+" ]";
	return Disc::toString();
}

void CD::display()
{
}
