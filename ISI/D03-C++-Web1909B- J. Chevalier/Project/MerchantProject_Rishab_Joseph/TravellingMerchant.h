// This is the controller class for the Travelling Merchant Game.

#pragma once
#include<iostream>
#include<string>
#include"Merchant.h"
#include"ConsoleMenu.h"
#include"UnruledNotebook.h"
#include"Product.h"
#include"Disc.h"
#include"Footwear.h"
using namespace std;

class TravellingMerchant
{
	string cityList[5];
	City currentCity;
private:
	Merchant* merchant;

	void mainMenu();
	void buyNewItem();
	void sellNewItem();
	void moveToNewCity();
	void showMerchantInventory();
	City initCityObjects(City);
public:
	//Contructor....
	TravellingMerchant(Merchant*);

	void startGame();
};

