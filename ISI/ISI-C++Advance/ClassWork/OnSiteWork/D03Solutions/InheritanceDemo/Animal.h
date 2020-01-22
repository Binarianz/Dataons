#pragma once
#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
	int legsCount;
	string color;
	double weight;
	int age;
public:
	Animal();
	Animal(int legsCount, string color, double weight, int age);
	int getLegsCount();
	string getColor();
	double getWeight();
	int getAge();
		
	
	void setAge(int age);
	//void setAge(int age);

	void sleep();
	void eat();
	void move();

	virtual string toString();
	void display();
};

