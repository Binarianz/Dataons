#include "DVD.h"
DVD::DVD() :Disc()
{

}
DVD::DVD(string  title, double buyingPrice, double sellingPrice, string artist, int duration, int year)
	: Disc(title, buyingPrice, sellingPrice, artist, duration, year)
{

}
string DVD::toString()
{
	return string();
}

void DVD::display()
{
}
