#include "RunningShoes.h"

RunningShoes::RunningShoes() :Footwear()
{

}
RunningShoes::RunningShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year)
	: Footwear(title, buyingPrice, sellingPrice, manufacturer, size, year)
{

}
string RunningShoes::toString()
{
	return string();
}

void RunningShoes::display()
{
}
