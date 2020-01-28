#include "Merchant.h"
#include<iostream>
#include<string>
using namespace std;

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
void Merchant::buy(int item) {
	cout << "Merchant Class: Buying in progress!!" << endl;

	if (this->size == this->capacity)
		expandInventory(this->capacity + 4);

	*this->inventory[size] = item;
	this->size++;

	// Handle money....
}

void Merchant::sell(int item) {
	cout << "Merchant Class: Selling in progress!!" << endl;

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

// Destructor....
Merchant::~Merchant()
{
	// Delete anything that is allocated dynamically....
	for (int i = 0; i < this->capacity; i++)
		delete inventory[i];

	delete[] inventory;
}
