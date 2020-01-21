#include <iostream>
#include <string>
#include "LibraryController.h"
using namespace std;

int main()
{
	Library library = Library();

	library.addItem(new LibraryItem("Middlemarch"));
	library.addItem(new LibraryItem("Infinite Jest"));
	library.addItem(new LibraryItem("The Handmaid's Tale"));
	library.addItem(new LibraryItem("The Brothers Karamazov"));

	LibraryController controller = LibraryController(&library);
	controller.start(); // Will not return until user selects Exit

	return 0;
}