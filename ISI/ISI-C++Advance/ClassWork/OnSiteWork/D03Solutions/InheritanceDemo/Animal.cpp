#include "Animal.h"

Animal::Animal():Animal(4,"red",6,10)
{
}

Animal::Animal(int legsCount, string color, double weight, int age)
{
	this->legsCount=legsCount;
	this->color=color;
	this->weight=weight;
	this->age=age;
}

int Animal::getLegsCount()
{
	return this->legsCount;
}

string Animal::getColor()
{
	return this->color;
}

double Animal::getWeight()
{
	return this->weight;
}

int Animal::getAge()
{
	return this->age;
}

void Animal::setAge(int age)
{
	this->age = age;
}

void Animal::sleep()
{
	cout << "Animal class : Animal is sleeping"<<endl;
}

void Animal::eat()
{
	cout << "Animal class : Animal is eating" << endl;
}

void Animal::move()
{
	cout << "Animal class : Animal is moving" << endl;
}

string Animal::toString()
{
	return "Legs count : " + to_string(this->legsCount) + "\ncolor : " + this->color + "weight : " + to_string(this->weight) + "Age : " + to_string(this->weight);
}

void Animal::display()
{
	cout << this->toString();
}
