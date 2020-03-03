#include "LibraryController.h"
using namespace std;

// Private methods

void LibraryController::mainMenu()
{
	const int optionsCount = 6;
	string options[optionsCount] =
	{
		"Add item",
		"Remove item",
		"Borrow item",
		"Return item",
		"Display all items",
		"Exit"
	};
	string title = separator + "Library: Main menu";
	string message = "Select action:";

	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);

	while (true)
	{
		int selection = menu.getUserSelection();
		cout << endl;

		switch (selection)
		{
		case 1:
			addItemMenu();
			break;
		case 2:
			removeItemMenu();
			break;
		case 3:
			borrowItemMenu();
			break;
		case 4:
			returnItemMenu();
			break;
		case 5:
			displayAllItemsMenu();
			break;
		case 6:
			return;
		}
	}
}

void LibraryController::addItemMenu()
{
	cout << separator << "Library action: Add item" << endl << endl;
	string title = readLine("Enter item title:");
	
	LibraryItem* item = new LibraryItem(title);
	library->addItem(item);

	cout << endl << "Successfully added item #" << item->getReferenceNumber()
		<< " '" << item->getTitle() << "' to library" << endl;
	cin.get();
}

void LibraryController::removeItemMenu()
{
	string* options = nullptr;
	int optionsCount = 0;
	allocateItemStringsArray(&options, &optionsCount);

	if (optionsCount < 1)
	{
		cout << "Error: Cannot remove item because library contains no items" << endl;
		cin.get();
		return;
	}

	string title = separator + "Library action: Remove item";
	string message = "Select item to remove:";
	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it

	int selectionIndex = menu.getUserSelectionIndex();
	LibraryItem* item = library->getItem(selectionIndex);
	int referenceNumber = item->getReferenceNumber();
	string itemTitle = item->getTitle();

	library->removeItem(selectionIndex);

	cout << endl << "Successfully removed item #" << referenceNumber
		<< " '" << itemTitle << "' from library" << endl;
	cin.get();
}

void LibraryController::borrowItemMenu()
{
	string* options = nullptr;
	int optionsCount = 0;
	allocateItemStringsArray(&options, &optionsCount);

	if (optionsCount < 1)
	{
		cout << "Error: Cannot borrow item because library contains no items" << endl;
		cin.get();
		return;
	}
	else if (library->getBorrowedCount() >= library->getItemsCount())
	{
		cout << "Error: Cannot borrow item because all items are already borrowed" << endl;
		cin.get();
		return;
	}

	string borrowerName = readLine("Enter borrower name:");
	cout << endl;

	string title = separator + "Library action: Borrow item";
	string message = "Select item to borrow:";
	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it
	
	bool success = false;
	do
	{
		int selectionIndex = menu.getUserSelectionIndex();
		LibraryItem* item = library->getItem(selectionIndex);

		success = item->borrowItem(borrowerName);

		if (success)
			cout << endl << *(item->getBorrowerName())
				<< " successfully borrowed item #" << item->getReferenceNumber()
				<< " '" << item->getTitle() << "' from library" << endl;
		else
			cout << endl << "Error: Cannot borrow item #" << item->getReferenceNumber()
			<< " '" << item->getTitle() << "' because it is already borrowed" << endl;

		cin.get();
	}
	while (!success);
}

void LibraryController::returnItemMenu()
{
	string* options = nullptr;
	int optionsCount = 0;
	allocateItemStringsArray(&options, &optionsCount);

	if (optionsCount < 1)
	{
		cout << "Error: Cannot return item because library contains no items" << endl;
		cin.get();
		return;
	}
	else if (library->getBorrowedCount() <= 0)
	{
		cout << "Error: Cannot return item because no items have been borrowed" << endl;
		cin.get();
		return;
	}

	string title = separator + "Library action: Return item";
	string message = "Select item to return:";
	ConsoleMenu menu = ConsoleMenu(title, message, options, optionsCount);
	delete[] options;	// Delete dynamic array after the menu copies it
	
	bool success = false;
	do
	{
		int selectionIndex = menu.getUserSelectionIndex();
		LibraryItem* item = library->getItem(selectionIndex);
		string* borrowerName = item->getBorrowerName();
		string borrower = (borrowerName != nullptr) ? *borrowerName : "";

		success = item->returnItem();

		if (success)
			cout << endl << borrower
			<< " successfully returned item #" << item->getReferenceNumber()
			<< " '" << item->getTitle() << "' to library" << endl;
		else
			cout << endl << "Error: Cannot return item #" << item->getReferenceNumber()
			<< " '" << item->getTitle() << "' because it has not been borrowed" << endl;

		cin.get();
	}
	while (!success);
}

void LibraryController::displayAllItemsMenu()
{
	cout << separator << "Library action: Display all items" << endl << endl;
	cout << library->toString() << endl;
	cin.get();
}

void LibraryController::allocateItemStringsArray(string** itemStrings, int* itemsCount)
{
	int count = library->getItemsCount();
	
	if (count > 0)
	{
		*itemStrings = new string[count];
		for (int i = 0; i < count; i++)
		{
			LibraryItem* item = library->getItem(i);
			(*itemStrings)[i] = item->toString() + ":  [" + item->getStatusString() + "]";
		}
	}
	else
		*itemStrings = nullptr;

	*itemsCount = count;
}


// Public methods

LibraryController::LibraryController(Library* library)
{
	this->library = library;
	this->separator = "-------------------------\n";
}

void LibraryController::start()
{
	mainMenu();
}