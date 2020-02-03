#include "City.h"
#include<iostream>
#include<string>
#include"Merchant.h"
using namespace std;

//Constructor....
City::City():City("")
{}

City::City(string name)
{
	this->name = name;
	this->size = 0;
	this->capacity = 5;
	this->CityInventory = new Product * [capacity];

	for (int i = 0; i < this->capacity; i++)
	{
		this->CityInventory[i] = nullptr;
	}
	//this->cityOption[3] = { "Montreal","Victoria,","Halifax" };
	//this.city
	//inventory[0] = 1;
	//inventory[1] = 2;
	//inventory[2] = 3;
	//inventory[3] = 4;
	//inventory[4] = 5;
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
	
	for (int i = 0; i < this->size; i++)
		inventoryString += to_string(this->CityInventory[i]->getBuyingPrice()) + "\n "; // Change...

	return inventoryString;
}

int City::getInventorySize() {
	return this->size;
}

// UI methods....
string City::toString() {
	
	return "[City Class: City = " + this->name
	+ ", Inventory = " + getInventory() + "]";
}

void City::display() {
	cout << toString() << endl;
}

void City::addCityInvetoryItem(Product* CityInvetoryItem)
{

	if (this->size >= this->capacity) {
		capacity += 5;
		Product** tempArray = this->CityInventory;
		this->CityInventory = new Product * [this->capacity];

		for (int i = 0; i < this->size; i++)
			this->CityInventory[i] = tempArray[i];
		for (int i = this->size; i < this->capacity; i++)
			this->CityInventory[i] = nullptr;

		delete[] tempArray;
		this->size++;
		this->CityInventory[this->size] = CityInvetoryItem;
		
	}
	else
	{
		
		this->CityInventory[this->size] = CityInvetoryItem;
		this->size++;
		
	}
		cout << CityInventory[size-1]->getTitle()<<endl;
	
}

void City::removeCityInvetoryItem(Product* CityInvetoryItem)
{
	for (int i = 0; i < capacity; i++)
	{
		if (CityInventory[i] == CityInvetoryItem)
		{
			int k = i;
			//delete this->CityInventory[i];
			for (int i = k; i < this->size - 1; i++)
				this->CityInventory[i] = this->CityInventory[i + 1];
		}
	}
	for (int i = 0; i < size-1; i++)
	{
		cout << CityInventory[i]->getTitle()<<endl;
	}
	//m.buy(CityInvetoryItem);
}

// Destructor....
City::~City()
{
	delete[] this->CityInventory;
	// Delete anything that is allocated dynamically....
}