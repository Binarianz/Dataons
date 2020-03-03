#include "Eagle.h"
#include"Bird.h"
Eagle::Eagle():Bird()
{

}

Eagle::Eagle(int legsCount, string color, double weight, int age, double maxFlightHeight, double beakSize):Bird(legsCount,color,weight,age,maxFlightHeight,beakSize)
{
}

void Eagle::huntForPra()
{
	cout << "\nGot the food!!";
}

string Eagle::toString()
{
	string birdDiscription = Bird::toString();
	return "[" + birdDiscription + " Eagle class:{ no fields}]";
}

void Eagle::display()
{
}
