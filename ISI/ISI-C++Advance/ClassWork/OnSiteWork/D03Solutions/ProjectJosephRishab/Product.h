#pragma once
#include<iostream>
#include<string>
using namespace std;
class Product
{
private:
	string name;
	double buyProduct, sellProduct;
public:
	Product(string);
	string getName();
	double getBuyProduct();
	double getSellProduct();
	void toString();
	void display();

};

