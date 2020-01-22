#pragma once
#include <iostream>
#include <string>
#include"Bird.h"
using namespace std;
class Sparrow:public Bird
{
public:
	Sparrow();
	Sparrow(int legsCount, string color, double weight, int age, double maxFlightHeight, double beakSize);

	virtual void fly();//override
	void escapeFromPredator();

	virtual string toString();
	void display();
};

