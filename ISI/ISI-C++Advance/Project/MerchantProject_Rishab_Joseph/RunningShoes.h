#pragma once
#include "SportsShoes.h"
class RunningShoes :
	public SportsShoes
{
public:
	RunningShoes();
	RunningShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year);
	string toString();
	void display();
};

