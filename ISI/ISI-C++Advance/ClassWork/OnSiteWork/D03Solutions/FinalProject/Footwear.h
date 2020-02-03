#pragma once
#include "Product.h"
class Footwear :public Product
{
	string manufacturer;
	int size;
	int year;
public:
	Footwear();
	Footwear(string, double, double, string, int, int);
	string getManufacturer();
	int getSize();
	int getYear();
	

	string toString();
	void display();
};

