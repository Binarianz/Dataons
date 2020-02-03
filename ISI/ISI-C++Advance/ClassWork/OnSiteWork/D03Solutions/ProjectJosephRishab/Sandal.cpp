#include "Sandal.h"

Sandal::Sandal() :Footwear()
{

}
Sandal::Sandal(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: Footwear(title, buyingPrice, sellingPrice, manufacturer, size, year)
{

}

string Sandal::toString()
{
	return Footwear::toString();
}

void Sandal::display()
{
}
