#pragma once
#include "Product.h"
class Disc :public Product
{
	string artist;
	double duration;
	int year;
public:
	Disc();
	Disc(string title, double buyingPrice, double sellingPrice, string artist, int duration, int year);
	string getArtist();
	double getDuration();
	int getYear();
	string toString();
	void display();
};

