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
	this->caughtCount = 0;
	this->currentCity = "";
	
	//this->currentCity = cityList[rand() % 5];
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
	return this->nameOne + " and " + this->nameTwo;
}

Product* Merchant::getProductFromIndex(int index)
{
	return merchantInventory[index];
}

// Action methods....
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

	this->merchantInventory[this->size] = merchantInventoryItem;
	this->size++;
	cout << "\n";

	if (this->money >= merchantInventoryItem->getBuyingPrice())
		this->money -= merchantInventoryItem->getBuyingPrice();
	else
		cout << "Cannot buying this product" << endl;
}



Product* Merchant::sell(Product* merchantInventoryItem) 
{
	if (merchantInventory[0] != nullptr) {
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
		this->money += merchantInventoryItem->getSellingPrice();
		return merchantInventoryItem;
	}
	else 
		return nullptr;
}

//displaying inventory
string Merchant::getInventory() {
	string inventoryString = "";

	if (this->size == 0) {
		for (int i = 0; i < this->size; i++)
			inventoryString += to_string(i +  1) + ". " + merchantInventory[i]->toString()+ +"\n"; // Change...
	}
	
	return inventoryString;
}

// Destructor....
Merchant::~Merchant()
{
	// Delete anything that is allocated dynamically....
	for (int i = 0; i < this->size; i++)
		delete merchantInventory[i];
	
	delete[] merchantInventory;
}


string Merchant::getCurrentCity() {
	return "";
}

int Merchant::getInventorySize()
{
	return this->size;
}

void Merchant::setCurrentCity(string cityName)
{
	this->currentCity = cityName;
}

void Merchant::caught()
{
	this->caughtCount++;
	this->money -= 100 + (50 * this->caughtCount - 1);

	if (this->money < 0) {
		cout << "Game Over !!!" << endl;
		exit(0);
	}
}
