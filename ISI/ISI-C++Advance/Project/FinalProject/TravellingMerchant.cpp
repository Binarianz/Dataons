#include "TravellingMerchant.h"
using namespace std;


// Private methods.....

void TravellingMerchant::mainMenu() {
	const int optionsCount = 5;
	string message = "Make your Selection =>";
	string menuOptions[optionsCount] =
	{
		"Buy",
		"Sell",
		"Move to a new City",
		"Show My Inventory",
		"Exit"
	};

	cout << "You are currently at " << this->merchant->getCurrentCity() << endl;
	
	ConsoleMenu menu = ConsoleMenu("Game Menu Options", message, menuOptions, optionsCount);

	while(true) {
		int selection = menu.getUserSelection();

		switch (selection) {
		case 1:
			buyNewItem();
			break;
		case 2:
			sellNewItem();
			break;
		case 3:
			moveToNewCity();
			break;
		case 4:
			showMerchantInventory();
			break;
		case 5:
			return;
		}
	}
}

void TravellingMerchant::buyNewItem() {
	cout << "First, show the users what to buy...." << endl;

	// "-1", because there is no use of caught count in this scenario.....
	//merchant->showConversation('F', -1);

	// this->currentCity.showCityInventory();
	// Get valid user selection....
	// merchant.buy(City);
	
}

void TravellingMerchant::sellNewItem() {
	// Show what to sell....
	cout << "Let's start selling...." << endl;
	
	// merchant.sell();

	// Same reason as above (for "-1").....
	// if(there is a profit)
	//merchant->showConversation('FP', -1);
	// else 
	//merchant->showConversation('FL', -1);
}

void TravellingMerchant::moveToNewCity() {
	cout << "Let's move to a new city...." << endl;
	// merchant.chooseNewCity();


	// Check if caught or not....
	// if(caught) => { merchant.moveToRandomCity() ;
	// merchant->showConversation('N', this.caughtCount++);
	// else => cout<<"(Sigh)....No cops today, as we see!"

}

void TravellingMerchant::showMerchantInventory() {
	cout << "Showing merchant inventory" << endl;
	// merchant.showInventory();
}

// Public methods.....
TravellingMerchant::TravellingMerchant(Merchant* merchant) {
	this->merchant = merchant;

	cout << " ================================== " << endl;
}

void TravellingMerchant::startGame() {
	mainMenu();
}