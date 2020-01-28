#pragma once
#include<iostream>
#include<string>
#include "Product.h"
using namespace std;

class City
{
private:
	string name;
	int size;
	int capacity; //maximum size...
	int inventory[5]; // Change...
	Product* cityInventory;
	//Product** inventory;

public:
	//Constructor....
	City();
	City(string);

	// Getter methods....
	string getName();
	string getInventory();
	void setCityInventory(string citiesoption[], int size);
	
	// UI methods....
	string toString();
	void display();

	// Destructor....
	~City();
};