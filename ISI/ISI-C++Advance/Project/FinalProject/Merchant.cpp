#include "Merchant.h"
#include<iostream>
#include<string>
using namespace std;

Merchant::Merchant()
{
}

// Constructor....
Merchant::Merchant(double money, string nameOne, string nameTwo)
{
	this->money = money;
	this->nameOne = nameOne;
	this->nameTwo = nameTwo;
	this->isCaught = false;

	this->capacity = 5;
	this->size = 0;
	this->inventory = new int*[this->capacity];

	for (int i = 0; i < this->capacity; i++)
		inventory[i] = nullptr;

	this->merchantInventory = new Product * [capacity];
	for (int i = 0; i < this->capacity; i++)
	{
		this->merchantInventory[i] = nullptr;
	}
}

// Getter methods....
double Merchant::getMoney() {
	return money;
}

string Merchant::getMerchantNames() {
	return this->nameOne + ", " + this->nameTwo;
}

int Merchant::getItemIndex(int item) {


	return 1;
}

// Action methods....
//void Merchant::buy(int item) {
//	cout << "Merchant Class: Buying in progress!!" << endl;
//
//	if (this->size == this->capacity)
//		expandInventory(this->capacity + 4);
//
//	*this->inventory[size] = item;
//	this->size++;
//
//	// Handle money....
//}
void Merchant::buy(Product* merchantInventoryItem)
{
	if (this->size >= this->capacity) {
		capacity += 5;
		Product** tempArray = this->merchantInventory;
		this->merchantInventory = new Product * [this->capacity];

		for (int i = 0; i < this->size; i++)
			this->merchantInventory[i] = tempArray[i];
		for (int i = this->size; i < this->capacity; i++)
			this->merchantInventory[i] = nullptr;

		delete[] tempArray;
	}

	this->size++;
	this->merchantInventory[this->size] = merchantInventoryItem;
	cout << "\n";
	cout<<merchantInventory[size]->getTitle();
}



void Merchant::sell(Product* merchantInventoryItem) 
{
	cout << "Merchant Class: Selling in progress!!" << endl;
	for (int i = 0; i < capacity; i++)
	{
		if (merchantInventory[i] == merchantInventoryItem)
		{
			size--;
			for (int j = i; j < this->size; j++)
				this->merchantInventory[j] = this->merchantInventory[j + 1];
			merchantInventory[size] = nullptr;
		}

	}

}

// Other methods....
void Merchant::expandInventory(int newCapacity) {
	this->capacity = newCapacity;
	int** tempArray = this->inventory;
	this->inventory = new int*[this->capacity];

	for (int i = 0; i < this->size; i++)
		this->inventory[i] = tempArray[i];
	
	for (int i = this->size; i < this->capacity; i++)
		this->inventory = nullptr;

	delete[] tempArray;
}
//displaying inventory
string Merchant::getInventory() {
	string inventoryString = "";

	for (int i = 0; i < this->size; i++)
		inventoryString += to_string(this->merchantInventory[i]->getBuyingPrice()) + "\n "; // Change...

	return inventoryString;
}
// Destructor....
Merchant::~Merchant()
{
	// Delete anything that is allocated dynamically....
	//for (int i = 0; i < this->capacity; i++)
	//	delete inventory[i];
	//
	delete[] inventory;
}
