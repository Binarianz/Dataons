#pragma once
#include "Disc.h"
class DVD :
	public Disc
{
public:
	DVD(); 
	DVD(string title, double buyingPrice, double sellingPrice, string artist, int duration, int year);
	string toString();
	void display();
};

