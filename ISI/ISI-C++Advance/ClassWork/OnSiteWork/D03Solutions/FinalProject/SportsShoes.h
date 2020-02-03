#pragma once
#include "Footwear.h"
class SportsShoes :
	public Footwear
{
public:
	SportsShoes();
	SportsShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year);
	string toString();
	void display();
};

