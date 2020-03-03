#pragma once
#include <iostream>
#include <string>
#include"Bird.h"
using namespace std;
class Eagle:public Bird
{
public:
	Eagle();
	Eagle(int legsCount, string color, double weight, int age, double maxFlightHeight, double beakSize);

	void huntForPra();

	virtual string toString();
	void display();
};

