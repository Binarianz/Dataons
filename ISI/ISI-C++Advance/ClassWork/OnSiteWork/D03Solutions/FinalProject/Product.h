#pragma once
#include<iostream>
#include<string>
#include"StringConversions.h"
using namespace std;

class Product
{
private:
	string title;
	double buyingPrice, sellingPrice;
	
public:
	//Constructor...
	Product();
	Product(string, double, double);

	//Getter Methods...
	string getTitle();
	double getSellingPrice();
	double getBuyingPrice();

	// UI methods....
	virtual string toString();
	void display();

	//Destructor...
	~Product();
};

