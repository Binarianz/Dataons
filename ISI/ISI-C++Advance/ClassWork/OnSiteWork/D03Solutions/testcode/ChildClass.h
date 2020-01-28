#pragma once
#include "BaseClass.h"
class ChildClass :
	public BaseClass
{
	int size;
	int steps;
public:
	ChildClass();
	ChildClass(int idNo, string name,int size,int steps);
	int getsize();
	int getsteps();
};

