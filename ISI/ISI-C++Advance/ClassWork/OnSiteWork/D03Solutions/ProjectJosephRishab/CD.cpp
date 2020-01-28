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
	return string();
}

void CD::display()
{
}
