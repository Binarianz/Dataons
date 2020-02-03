#pragma once
#include<iostream>
#include<string>
#include"Product.h"
#include"City.h"
using namespace std;

class Merchant
{
private:
	int size; // Size of the inventory...
	int capacity; // Maximum size of the inventory....
	double money;
	int caughtCount;

	Product** merchantInventory;
	string nameOne;
	string nameTwo;
	string currentCity;
public:
	// Constructor....
	Merchant();
	Merchant(double, string, string);

	// Getter methods....
	double getMoney();
	string getMerchantNames();
	Product* getProductFromIndex(int);
	string getCurrentCity();
	int getInventorySize();

	// Setter method....
	void setCurrentCity(string);
	void caught();

	// Action methods....
	//void buy(int);
	void buy(Product* merchantnventoryItem);
	Product* sell(Product* merchantnventoryItem);

	// Other methods....
	void expandInventory(int newCapacity);

	string getInventory();
	//string getCurrentCityInventory();
	// Destructor....
	~Merchant();
};

