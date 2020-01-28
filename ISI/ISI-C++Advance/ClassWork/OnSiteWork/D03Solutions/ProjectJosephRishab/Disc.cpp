#include "Disc.h"

Disc::Disc()
{
}

Disc::Disc(string  title, double buyingPrice, double sellingPrice, string artist, int duration, int year) 
	:Product(title, buyingPrice, sellingPrice)
{
}
string Disc::getArtist()
{
	return this->artist;
}

double Disc::getDuration()
{
	return this->duration;
}

int Disc::getYear()
{
	return this->year;
}
string Disc::toString()
{
	return string();
}
void Disc::display()
{
}
