#pragma once
#include"SportsShoes.h"
#include"WinterShoes.h"
class SpecialWinterSportsShoes
	:public SportsShoes, public WinterShoes
{
public:
	SpecialWinterSportsShoes();
	SpecialWinterSportsShoes(string  title, double buyingPrice, double sellingPrice, string manufacturer, int size, int year);
	string toString();
	void display();
};

