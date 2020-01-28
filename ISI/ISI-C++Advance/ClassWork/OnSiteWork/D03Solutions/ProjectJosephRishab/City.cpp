#include "City.h"
#include<iostream>
#include<string>
using namespace std;

//Constructor....
City::City():City("")
{}

City::City(string name)
{
	this->name = name;

	inventory[0] = 1;
	inventory[1] = 2;
	inventory[2] = 3;
	inventory[3] = 4;
	inventory[4] = 5;
	/*inventory = new int*[capacity];
	for (int i = 0; i < capacity; i++)
		inventory[i] = nullptr;*/
	//mcode
}

// Getter methods....
string City::getName() {
	return name;
}

string City::getInventory() {
	string inventoryString = "";
	//cityInventory = new Product[5];
	for (int i = 0; i < 5; i++)
		inventoryString += to_string(this->inventory[i]) + " "; // Change...

	return inventoryString;
}

void City::setCityInventory(string citiesoption[], int size)
{
	int size = rand() % 3 + 4;
	this->cityInventory = new Product[size];

}

// UI methods....
string City::toString() {
	return "[City Class: City = " + this->name
		+ ", Inventory = " + getInventory() + "]";
}

void City::display() {
	cout << toString() << endl;
}

// Destructor....
City::~City()
{
	// Delete anything that is allocated dynamically....
}