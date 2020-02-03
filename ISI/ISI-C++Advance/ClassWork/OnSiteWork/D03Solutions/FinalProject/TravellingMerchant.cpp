#include "TravellingMerchant.h"
using namespace std;

// Private methods.....

City TravellingMerchant::initCityObjects(City currentCity) {
	
	if (currentCity.getName() == "Montreal") {
		currentCity.addCityInvetoryItem(new Book("Making your bed", 22.2, 20.2, "John Maclarin", 2014, 200));
		currentCity.addCityInvetoryItem(new Disc("Call of Duty", 22.2, 20.2, "Rishab&Joseph(RJ)", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Jordan", 22.2, 20.2, "Nike", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Air", 22.2, 20.2, "Nike", 3, 2000));
		
	}
	if (currentCity.getName() == "Windsor") {
		currentCity.addCityInvetoryItem(new Book("Making your bed", 22.2, 20.2, "John Maclarin", 2014, 200));
		currentCity.addCityInvetoryItem(new Disc("GTA", 22.2, 20.2, "Rockstar", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Jordan", 22.2, 20.2, "Nike", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("BMW", 22.2, 20.2, "Puma", 3, 2000));
		
	}
	if (currentCity.getName() == "Toronto") {
		currentCity.addCityInvetoryItem(new Book("Making your bed", 22.2, 20.2, "John Maclarin", 2014, 200));
		currentCity.addCityInvetoryItem(new Disc("counter strike", 22.2, 20.2, "Valve", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Jordan", 22.2, 20.2, "Nike", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Jordan", 22.2, 20.2, "Nike", 3, 2000));
		
	}
	if (currentCity.getName() == "Vancouver") {
		currentCity.addCityInvetoryItem(new Book("Making your bed", 22.2, 20.2, "John Maclarin", 2014, 200));
		currentCity.addCityInvetoryItem(new Disc("counter strike", 22.2, 20.2, "Valve", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Jordan", 22.2, 20.2, "Nike", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Ferrari", 22.2, 20.2, "Puma", 3, 2000));
		
	}
	if (currentCity.getName() == "Ottawa") {
		currentCity.addCityInvetoryItem(new Book("Thinking Fast and Slow", 22.2, 20.2, "Daniel Kanheman" , 2014, 200));
		currentCity.addCityInvetoryItem(new Disc("Pubg", 22.2, 20.2, "Tencent Games", 3, 2000));
		currentCity.addCityInvetoryItem(new Footwear("Jordan", 22.2, 20.2, "Nike", 3, 2000));
		
	}

	return currentCity;
}	

void TravellingMerchant::mainMenu() {
	const int optionsCount = 5;
	string message = "Make your Selection =>";
	
	City cityList[5] = {
		City("Montreal"),
		City("Windsor"),
		City("Toronto"),
		City("Ottawa"),
		City("Vancouver")
	};
	
	int randomSelection = rand() % 5;
	this->currentCity = initCityObjects(cityList[randomSelection]);
	swap(this->cityList[randomSelection], this->cityList[0]);

	this->merchant->setCurrentCity(this->currentCity.getName());

	string menuOptions[optionsCount] =
	{
		"Buy",
		"Sell",
		"Move to a new City",
		"Show My Inventory",
		"Exit"
	};

	//cout << "You are currently at " << this->merchant->getCurrentCity() << endl;
	
	ConsoleMenu menu = ConsoleMenu("Game Menu Options", message, menuOptions, optionsCount);

	while(true) {
		cout << "You are currently at " << this->currentCity.getName() << ". Current Balance = "<<StringConversions::doubleToCurrencyString(this->merchant->getMoney())<< endl;
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
	int selection;

	cout << this->currentCity.getInventory();
	cin >> selection;

	this->merchant->buy(this->currentCity.removeCityInvetoryItem(this->currentCity.getProductFromIndex(selection - 1)));
	
	cout << endl << this->merchant->getInventory();

	cin.get();
}

void TravellingMerchant::sellNewItem() {
	int selection;

	if (this->merchant->getInventorySize() > 0) {
		cout << this->merchant->getInventory();
		cin >> selection;

		this->currentCity.addCityInvetoryItem(this->merchant->sell(this->merchant->getProductFromIndex(selection - 1)));
	}
	else {
		cout << "First Buy Something" <<  endl ;
	}

	cin.get();
}

void TravellingMerchant::moveToNewCity() {
	int invSize = this->merchant->getInventorySize();
	
	bool caught = ((invSize / ((rand() % (invSize + 1)) + 1) > invSize / 2) && (invSize > 3));
	
	if (!caught) {
		int userSelection;
	
		for (int i = 1; i < 5; i++)
			cout << i << ". " << this->cityList[i] <<endl;
		cin >> userSelection;

		this->currentCity = initCityObjects(cityList[userSelection]);

		swap(this->cityList[userSelection], this->cityList[0]);
		//string temp;
	}
	else
	{
		int randomSelection = rand() % 5;
		this->currentCity = initCityObjects(cityList[randomSelection]);
		swap(this->cityList[randomSelection], this->cityList[0]);
	}

	cin.get();
}

void TravellingMerchant::showMerchantInventory() {
	if (this->merchant->getInventory() == "")
		cout << "Reallyyy !!!" << endl;
	else
		cout << this->merchant->getInventory();
	
	cout << "Hit enter to return";
	cin.get();
}

// Public methods.....
TravellingMerchant::TravellingMerchant(Merchant* merchant) {
	this->merchant = merchant;
	this->cityList[0] = "Montreal";
	this->cityList[1] = "Windsor";
	this->cityList[2] = "Toronto";
	this->cityList[3] = "Ottawa";
	this->cityList[4] = "Vancouver";

	cout << "Hey " << this->merchant->getMerchantNames() << ", let's start the game." << endl;
	cout << " ================================== " << endl;
}

void TravellingMerchant::startGame() {
	mainMenu();
}