#pragma once
#include <iostream>
#include <string>
#include "Disc.h"
using namespace std;

class CD : public Disc
{
private:
	string artist;
	int tracksCount;
	bool personListening;
	int timesListened;
	bool broken;

public:
	CD(string title, double duration, string artist, int tracksCount);
	
	string getArtist();
	int getTracksCount();
	bool isPersonListening();
	int getTimesListened();
	bool isBroken();

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
		//		If the CD has been listened to more that 10 times
		//			The CD should become broken (cannot listen again)
		// Return the Boolean error code (is it a valid action?)

	// Override methods
	virtual string toString();
	virtual string getStatusString();
};