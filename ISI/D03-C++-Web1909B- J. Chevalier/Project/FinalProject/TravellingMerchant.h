// This is the controller class for the Travelling Merchant Game.

#pragma once
#include<iostream>
#include<string>
#include"Merchant.h"
#include"ConsoleMenu.h"
using namespace std;

class TravellingMerchant
{
private:
	Merchant* merchant;

	void mainMenu();
	void buyNewItem();
	void sellNewItem();
	void moveToNewCity();
	void showMerchantInventory();
public:
	//Contructor....
	TravellingMerchant(Merchant*);

	void startGame();
};

