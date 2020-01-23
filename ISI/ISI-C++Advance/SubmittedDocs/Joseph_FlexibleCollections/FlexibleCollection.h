#pragma once
#include <iostream>
#include <string>
using namespace std;
class FlexibleCollection
{
private:
	int** arrayVariables;
	int size;
	int capacity;//maximum size
public:
	FlexibleCollection();
	~FlexibleCollection();
	int* getElement(int index);
	int getSize();
	int getCapacity();
	int getElementIndex(int value);//if d search fails return 1
	void add(int value);
	bool remove(int index);

};
