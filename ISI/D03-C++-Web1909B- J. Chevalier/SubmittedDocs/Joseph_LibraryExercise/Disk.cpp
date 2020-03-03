#include "Disk.h"

Disk::Disk()
{
}

Disk::Disk(double duration, string title):LibraryItem(title)
{
	this->duration = duration;
	this->canPlay = false;
	this->isPlaying = false;
}

Disk::~Disk()
{
}

double Disk::getDuration()
{
	return this->duration;
}

bool Disk::getCanPlay()
{
	return this->canPlay;
}

bool Disk::getIsPlaying()
{
	return this->isPlaying;
}

bool Disk::borrowItem(string borrowerName)
{
	bool sucess=LibraryItem::borrowItem(borrowerName);

	if (sucess==true)
	{
		this->canPlay = true;
	}
	return sucess;
}

bool Disk::returnItem()
{
	bool sucess = LibraryItem::returnItem();
	if (sucess)
	{
		canPlay = false;
		isPlaying = false;
	}
		
	return sucess;
}

string Disk::toString()
{
	string librarystring = LibraryItem::toString();
	return librarystring + "Duration = " + to_string(duration) +
		"can it be played : " + to_string(canPlay) + "is playing = " +
		to_string(isPlaying);
}

bool Disk::play()
{
	bool validAction = canPlay & !isPlaying;
	if (validAction)
	{
		isPlaying = true;
		return true;
	}
	else
		return false;
}

bool Disk::stop()
{
	bool validAction = isPlaying;
	if (validAction)
		isPlaying = false;
	return validAction;
}
