#pragma once
#include<iostream>
#include<string>
#include "Product.h"
#include"Merchant.h"
using namespace std;

class City
{
private:
	string name;
	int size;
	int capacity; //maximum size...
	Product** CityInventory;

public:
	//Constructor....
	City();
	City(string);

	// Getter methods....
	string getName();
	string getInventory();
	Product* getProductFromIndex(int);

	// UI methods....
	string toString();
	void display();

	//add and remove from city inventory
	void addCityInvetoryItem(Product*);
	Product* removeCityInvetoryItem(Product* CityInvetoryItem);

	// Destructor....
	~City();
};