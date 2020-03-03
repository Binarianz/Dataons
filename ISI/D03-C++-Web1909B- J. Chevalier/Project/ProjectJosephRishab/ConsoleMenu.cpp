#include "ConsoleMenu.h"
using namespace std;

// Constructor/Destructor....
ConsoleMenu::ConsoleMenu(string options[], int optionsCount)
{
	setOptions(options, optionsCount);
}

ConsoleMenu::ConsoleMenu(ConsoleMenu& menu)
	:ConsoleMenu(menu.optionsArray, menu.optionsCount)
{
	//Do it for bonus points....
}


ConsoleMenu::~ConsoleMenu()
{
	delete[] optionsArray;
}

//Getter methods....
int ConsoleMenu::getOptionsCount() {
	return optionsCount;
}

string ConsoleMenu::getOptions(int index) {
	if (index > 0 && index < this->optionsCount)
		return "Option # " + this->optionsArray[index];

	return "Wrong Selection";
}

//Setter methods....
void ConsoleMenu::setOptions(string options[], int optionsCount) {
	if (this->optionsArray != nullptr)
		delete[] this->optionsArray;

	this->optionsArray = new string[optionsCount];
	this->optionsCount = optionsCount;

	for (int i = 0; i < optionsCount; i++)
		this->optionsArray[i] = options[i];

	//ConsoleMenu(options, optionsCount);
}

//User interface methods....
void ConsoleMenu::displayOptions() {
	cout << "<===== Displaying Menu Options =====>" << endl;

	for (int i = 0; i < this->optionsCount; i++)
		cout << i + 1 << ": " << this->optionsArray[i] << endl;
}

int ConsoleMenu::displayAndGetSelection() {
	int selection;

	displayOptions();
	cout << "Choose option: ";
	cin >> selection;

	return selection;
}