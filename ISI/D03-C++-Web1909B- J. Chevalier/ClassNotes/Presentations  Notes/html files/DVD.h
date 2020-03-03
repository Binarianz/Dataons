#pragma once
#include <iostream>
#include <string>
#include "Disc.h"
#include "Resolution.h"
using namespace std;

class DVD : public Disc
{
private:
	string director;
	Resolution resolution;
	bool personWatching;
	int timesWatched;
	Date* dateLastWatched;

public:
	DVD(string title, double duration, string director, Resolution resolution);
	virtual ~DVD();

	string getDirector();
	Resolution getResolution();
	bool isPersonWatching();
	int getTimesWatched();
	Date* getDateLastWatched();

	// Override methods
	virtual bool play();
		// Calculate whether this is a valid action, by:
		//		a) calling the parent version
		//		b) checking any other necessary conditions
		// If it is a valid action:
		//		Apply the action by updating field(s), as necessary
		// Return the Boolean error code (is it a valid action?)

	virtual bool stop();
		// Calculate whether this is a valid action, by:
		//		a) calling the parent version
		//		b) checking any other necessary conditions
		// If it is a valid action:
		//		Apply the action by updating field(s), as necessary
		// Return the Boolean error code (is it a valid action?)

	virtual string toString();
	virtual string getStatusString();
};
