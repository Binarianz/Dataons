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
}

// Getter methods....
string City::getName() {
	return name;
}

string City::getInventory() {
	string inventoryString = "";
	
	for (int i = 0; i < this->size; i++)
		inventoryString += to_string(i+1) + ". " + this->CityInventory[i]->getTitle() + " Buying Price = " + to_string(this->CityInventory[i]->getBuyingPrice()) + "Selling Price = " + to_string(this->CityInventory[i]->getSellingPrice())+"\n"; // Change...

	return inventoryString;
}

// UI methods....
string City::toString() {
	
	return "[City Class: City = " + this->name
	+ ", Inventory = " + getInventory() + "]";
}

void City::display() {
	cout << toString() << endl;
}

void City::addCityInvetoryItem(Product* CityInventoryItem)
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
	}
	
	this->CityInventory[this->size] = CityInventoryItem;
	this->size++;	
}

Product* City::removeCityInvetoryItem(Product* CityInventoryItem)
{
	for (int i = 0; i < capacity; i++)
	{
		if (CityInventory[i] == CityInventoryItem)
		{
			int k = i;
			//delete this->CityInventory[i];
			for (int i = k; i < this->size - 1; i++)
				this->CityInventory[i] = this->CityInventory[i + 1];
		}
	}

	this->size--;
	return CityInventoryItem;
}


Product* City::getProductFromIndex(int index) {
	return CityInventory[index];
}

// Destructor....
City::~City()
{
	// Delete anything that is allocated dynamically....
	/*for (int i = 0; i < this->size; i++)
		delete CityInventory[i];

	delete[] CityInventory;*/
}