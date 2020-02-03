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
	//this->cityList[5]={ "Montreal","Victoria,","Halifax","Calgary","Vancouver"};
	// Setting the current city to any random city initially.....
	
	this->cityList[0] = { "Montreal" };
	this->cityList[1] = { "Victoria" };
	this->cityList[2] = { "Halifax" };
	this->cityList[3] = { "Calgary" };
	this->cityList[4] = { "Vancouver"};

	this->currentCity = this->cityList[rand() % 5];
	//this->ccity = currentCity.getName();
	this->capacity = 5;
	this->size = 0;

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
		this->expandInventory(this->capacity + 5);
	}

	this->merchantInventory[this->size] = merchantInventoryItem;
	this->size++;
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
	currentCity.addCityInvetoryItem(merchantInventoryItem);
	// Handle Money...
}

void Merchant::moveToNewCity() {
	cout << "You are current at " << this->currentCity.getName() << endl;
	
	cout << "Choose new city ====> ";
	cin.get();

	// XXXXXXXXX
}

// Other methods....
void Merchant::expandInventory(int newCapacity) {
	this->capacity = newCapacity;
	Product** tempArray = this->merchantInventory;
	this->merchantInventory = new Product*[this->capacity];

	for (int i = 0; i < this->size; i++)
		this->merchantInventory[i] = tempArray[i];
	
	for (int i = this->size; i < this->capacity; i++)
		this->merchantInventory = nullptr;

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
	for (int i = 0; i < this->capacity; i++)
		delete merchantInventory[i];
	
	delete[] merchantInventory;
}
