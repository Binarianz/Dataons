#pragma once
#include "Disc.h"
class CD :
	public Disc
{
public:
	CD();
	CD(string title, double buyingPrice, double sellingPrice, string artist, int duration, int year);
	string toString();
	void display();

};

