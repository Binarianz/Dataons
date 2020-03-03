#include "Bird.h"
using namespace std;

void Bird::fly()
{
	cout << "Bird class: birds can fly";
}

void Bird::buildNest()
{
	cout << "Bird class: birds can make nest";
}

Bird::Bird():Animal(4, "red", 6, 10)
{
	this->maxFlightHeight = 100;
	this->beakSize = 6;

}

Bird::Bird(int legsCount, string color, double weight, int age,double maxFlightHeight, double beakSize):Animal(legsCount,color,weight,age)
{
	this->maxFlightHeight = maxFlightHeight;
	this->beakSize = beakSize;
}

double Bird::getMaxFlightHeight()
{
	return this->maxFlightHeight;
}

double Bird::getBeakSize()
{
	return this->beakSize;
}

void Bird::setMaxFlightHeight(double maxFlightHeight)
{
	this->maxFlightHeight = maxFlightHeight;
}

void Bird::setBeakSize(double beakSize)
{
	this->beakSize = beakSize;
}

string Bird::toString()
{
	string animalDescription = Animal::toString();
	return "[" + animalDescription + "Bird class: Max height" + to_string(maxFlightHeight) + "Bird class: beak size" + to_string(beakSize);
}

void Bird::display()
{
}
