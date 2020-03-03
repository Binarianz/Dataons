#include "Product.h"
using namespace std;

//Constructor....
Product::Product() : Product("", 0, 0)
{}

Product::Product(string title, double buyingPrice, double sellingPrice)
{
	this->title = title;
	this->buyingPrice = buyingPrice;
	this->sellingPrice = sellingPrice;

	this->sellingPrice = rand() % 30 + 30;
	this->buyingPrice = rand() % 30 + this->sellingPrice;
}

//Getter Methods....
string Product::getTitle() {
	return title;
}

double Product::getSellingPrice(){
	return sellingPrice;
}

double Product::getBuyingPrice() {
	return buyingPrice;
}

// UI methods....
string Product::toString() {
	return "Title = " + this->title + "Selling price = " + StringConversions::doubleToCurrencyString(this->sellingPrice)
		+ "Buying price = " + StringConversions::doubleToCurrencyString(this->buyingPrice);
}

void Product::display() {
	cout << toString() << endl;
}

//Destructor....
Product::~Product()
{
	// Delete anything that is allocated dynamically....
}