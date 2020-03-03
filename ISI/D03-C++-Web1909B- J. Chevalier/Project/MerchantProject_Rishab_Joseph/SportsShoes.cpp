#include "SportsShoes.h"
SportsShoes::SportsShoes() :Footwear()
{

}
SportsShoes::SportsShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: Footwear(title,buyingPrice,sellingPrice,manufacturer,size,year)
{

}

string SportsShoes::toString()
{
	return Footwear::toString();
}

void SportsShoes::display()
{
}
