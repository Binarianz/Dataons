#pragma once
#include "Footwear.h"
class Heels :
	public Footwear
{
public:
	Heels();
	Heels(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year);
	string toString();
	void display();
};

