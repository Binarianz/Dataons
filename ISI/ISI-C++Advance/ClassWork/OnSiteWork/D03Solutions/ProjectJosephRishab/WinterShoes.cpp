#include "WinterShoes.h"

WinterShoes::WinterShoes() :Footwear()
{

}
WinterShoes::WinterShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: Footwear(title, buyingPrice, sellingPrice, manufacturer, size, year)
{

}
string WinterShoes::toString()
{
	return Footwear::toString();
}

void WinterShoes::display()
{
}
