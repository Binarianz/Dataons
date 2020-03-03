#include "FlexibleCollection.h"
FlexibleCollection::FlexibleCollection()
{
	this->capacity = 4;
	this->size = 0;
	arrayVariables = new int* [capacity];
	for (int i = 0; i < capacity; i++)
	{
		arrayVariables[i] = nullptr;
	}
}
FlexibleCollection::~FlexibleCollection()
{
	//for (int i = 0; i < size; i++)
	//{
	//	delete arrayVariables[i];
	//	arrayVariables[i] = nullptr;
	//}
	delete[] arrayVariables;

}

int* FlexibleCollection::getElement(int index)
{
	return this->arrayVariables[index];
}

int FlexibleCollection::getSize()
{
	return this->size;
}

int FlexibleCollection::getCapacity()
{
	return this->capacity;
}

int FlexibleCollection::getElementIndex(int value)
{
	for (int i = 0; i < size; i++)
	{
		if (*arrayVariables[i] == value)
			return i;
	}
	return -1;
}

void FlexibleCollection::add(int value)
{
	//arrayVariables[size] = new int(value);
	//size++;
	if (size == capacity)
	{
		capacity++;
		size = 0;
		int** tempArray = new int* [capacity];
		for (int i = 0; i < capacity; i++)
		{
			tempArray[i] = arrayVariables[i];
			size++;
		}
		//*tempArray[capacity] = value;
		arrayVariables = new int* [capacity];
		for (int i = 0; i < capacity; i++)
		{
			arrayVariables[i] = tempArray[i];
		}
		arrayVariables[size] = new int(value);
	    size++;
		delete[] tempArray;
	}
	else
	{
		arrayVariables[size] = new int(value);
		size++;
			
	}

}

bool FlexibleCollection::remove(int index)
{
	for (int i = 0; i < size; i++)
	{
		//if(*arrayVariables[i])
	}
	delete arrayVariables[index];
	for (int i = index; i < size; i++)
	{
		arrayVariables[i] = arrayVariables[i + 1];
		delete arrayVariables[i + 1];
	
	}
	if (index < size && index >= 0)
	return true;
	return false;
}
