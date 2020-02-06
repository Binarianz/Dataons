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
}

//Getter Methods....
string Product::getTitle() {
	return this->title;
}

double Product::getSellingPrice(){
	return sellingPrice;
}

double Product::getBuyingPrice() {
	return this->buyingPrice;
}

// UI methods....
string Product::toString() {
	return "[ Title : " + this->getTitle() + " Buying Price : " +
		StringConversions::doubleToCurrencyString(this->getBuyingPrice()) +
		" Selling Price : " + StringConversions::doubleToCurrencyString(this->getSellingPrice());
}

void Product::display() {
	cout << toString() << endl;
}

//Destructor....
Product::~Product()
{
	// Delete anything that is allocated dynamically....
}
