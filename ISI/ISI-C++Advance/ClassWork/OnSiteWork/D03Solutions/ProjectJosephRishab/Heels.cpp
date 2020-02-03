#include "Heels.h"

Heels::Heels() :Footwear()
{

}
Heels::Heels(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: Footwear(title, buyingPrice, sellingPrice, manufacturer, size, year)
{

}
string Heels::toString()
{
	return Footwear::toString();
}

void Heels::display()
{
}
