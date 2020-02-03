#include "RunningShoes.h"

RunningShoes::RunningShoes() :SportsShoes()
{

}
RunningShoes::RunningShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: SportsShoes(title, buyingPrice, sellingPrice, manufacturer, size, year)
{

}
string RunningShoes::toString()
{
	return SportsShoes::toString();
}

void RunningShoes::display()
{
}
