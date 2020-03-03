#include "SpecialWinterSportsShoes.h"

SpecialWinterSportsShoes::SpecialWinterSportsShoes()
{
}

SpecialWinterSportsShoes::SpecialWinterSportsShoes(string title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	:SportsShoes(title, buyingPrice, sellingPrice, manufacturer, size, year),WinterShoes(title, buyingPrice, sellingPrice, manufacturer, size, year)
{
}

string SpecialWinterSportsShoes::toString()
{
	return SportsShoes::toString();
}

void SpecialWinterSportsShoes::display()
{
}
