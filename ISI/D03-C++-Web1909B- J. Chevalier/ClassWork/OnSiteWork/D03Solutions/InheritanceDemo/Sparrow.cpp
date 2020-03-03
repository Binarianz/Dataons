#include "Sparrow.h"
#include"Bird.h"
Sparrow::Sparrow():Bird()
{}

Sparrow::Sparrow(int legsCount, string color, double weight, int age, double maxFlightHeight, double beakSize)
{
}

void Sparrow::fly()
{
	Bird::fly();
	cout << "Sparrow:Class: sparrow version of fly() ";
}

void Sparrow::escapeFromPredator()
{
	cout << "Escaped";
}

string Sparrow::toString()
{
	string birdDiscription = Bird::toString();
	return "[" + birdDiscription + " Sparrow class:{ no fields}]";
}

void Sparrow::display()
{
	cout << toString ()<< endl;
}
