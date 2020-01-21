#pragma once
#include<iostream>
#include<string>
#include"Product.h"
using namespace std;
class City
{
private:
	string name;
	//Product Inventory[];//need to be dynamic
public:
	City(string);
	string getName();
	string getIinventory();

};

