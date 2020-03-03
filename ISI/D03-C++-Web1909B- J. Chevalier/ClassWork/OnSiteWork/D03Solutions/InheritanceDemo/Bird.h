#pragma once
#include <iostream>
#include <string>
#include"Animal.h"
using namespace std;
class Bird:public Animal
{
private:
	double maxFlightHeight;
	double beakSize;
public:
	virtual void fly();//orignial
	void buildNest();

	Bird();
	Bird(int legsCount, string color, double weight, int age,double maxFlightHeight,double beakSize);
	double getMaxFlightHeight();
	double getBeakSize();

	void setMaxFlightHeight(double maxFlightHeight);
	void setBeakSize(double beakSize);

	virtual string toString();
	void display();


};

