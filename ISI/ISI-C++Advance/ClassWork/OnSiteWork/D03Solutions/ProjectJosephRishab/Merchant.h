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
	bool isCaught;
	//Product** inventory;
	int** inventory;
	string nameOne, nameTwo;

public:
	// Constructor....
	Merchant(double, string, string);

	// Getter methods....
	double getMoney();
	string getMerchantNames();
	int getItemIndex(int);

	// Action methods....
	void buy(int);
	void sell(int);

	// Other methods....
	void expandInventory(int newCapacity);

	// Destructor....
	~Merchant();
};

