#pragma once
#include "Footwear.h"
class WinterShoes :
	public Footwear
{
public:
	WinterShoes();
	WinterShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year);
	string toString();
	void display();
};

