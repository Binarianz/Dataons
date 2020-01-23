#pragma once
#include <iostream>
#include <string>
#include"LibraryItem.h"
using namespace std;
class Disk :public LibraryItem
{
private:
	double duration;
	bool canPlay;
	bool isPlaying;
public:
	Disk();
	Disk(double duration, string title);
	~Disk();
	double getDuration();
	bool getCanPlay();
	bool getIsPlaying();
	virtual bool borrowItem(string borrowerName);
	virtual bool returnItem();
	virtual  string toString();
	virtual bool play();
	virtual bool stop();
};

