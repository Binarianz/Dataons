#include "Footwear.h"

Footwear::Footwear()
{
}

Footwear::Footwear(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: Product(title, buyingPrice, sellingPrice)
{
	this->manufacturer = manufacturer;
	this->size = size;
	this->year = year;
}

string Footwear::getManufacturer()
{
	return this->manufacturer;
}

int Footwear::getSize()
{
	return this->size;
}

int Footwear::getYear()
{
	return this->year;
}
string Footwear::toString()
{
	return string();
}

void Footwear::display()
{
}
