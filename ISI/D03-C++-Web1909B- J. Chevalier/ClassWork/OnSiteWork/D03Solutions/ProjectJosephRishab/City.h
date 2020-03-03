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
	int inventory[5]; // Change...
	//Merchant m;
	//Product* cityInventory;
	Product** CityInventory;
	// = new ci{ "Montreal","Victoria,","Halifax" };

public:
	//Constructor....
	City();
	City(string);

	// Getter methods....
	string getName();
	string getInventory();
	int getInventorySize();

	// UI methods....
	string toString();
	void display();
	//void showCityInventory(string);
	//add and remove from city inventory

	void addCityInvetoryItem(Product* CityInvetoryItem);
	void removeCityInvetoryItem(Product* CityInvetoryItem);

	// Destructor....
	~City();
};