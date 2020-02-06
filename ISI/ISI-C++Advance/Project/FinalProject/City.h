#pragma once
#include<iostream>
#include<string>
#include "Product.h"
using namespace std;

class City
{
private:
	string name;
	int size;
	int capacity; //maximum size...
	int inventory[5]; // Change...
	//Product* cityInventory;
	Product** CityInventory;
	string cityOption[3];// = new ci{ "Montreal","Victoria,","Halifax" };

public:
	//Constructor....
	City();
	City(string);

	// Getter methods....
	string getName();
	string getInventory();
	void setCityInventory(string citiesoption[], int size);
	
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