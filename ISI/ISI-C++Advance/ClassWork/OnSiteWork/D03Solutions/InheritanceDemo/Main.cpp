#include <iostream>
#include <string>
#include"Animal.h"
#include"Bird.h"
#include"Eagle.h"
#include"Sparrow.h"
using namespace std;
int main()
{
	Animal anie = Animal(4, "black", 3, 6);
	Bird betrend = Bird();
	Eagle ethan = Eagle();
	Sparrow spartacus = Sparrow();


	Animal* anieptr = &anie;
	Bird* betrendptr = &betrend;
	Eagle* ethanptr=&ethan;
	Sparrow* sparptrtacusptr = &spartacus;



	anieptr->display();
	betrendptr->display();
	ethanptr->display();
	sparptrtacusptr->display();
	cin.get();
	anieptr->sleep();
	anie.display();
	anie.move();
	cin.get();
	betrend.fly();
	betrend.buildNest();
	cin.get();
	spartacus.sleep();
	spartacus.move();
	spartacus.fly();
	spartacus.buildNest();
	spartacus.escapeFromPredator();
	cin.get();
	ethan.sleep();
	ethan.move();
	ethan.fly();
	ethan.buildNest();
	ethan.huntForPra();
	//return 0;
}