#pragma once
#include "Footwear.h"
class Sandal :
	public Footwear
{
public:
	Sandal();
	Sandal(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year);
	string toString();
	void display();
};
