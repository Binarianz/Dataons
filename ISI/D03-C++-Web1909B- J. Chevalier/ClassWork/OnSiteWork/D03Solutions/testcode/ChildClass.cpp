#include "ChildClass.h"

ChildClass::ChildClass()
{
}

ChildClass::ChildClass(int idNo, string name, int size, int steps):BaseClass(idNo,name)
{
	size = size;
	steps = steps;
}

int ChildClass::getsize()
{
	return size;
}

int ChildClass::getsteps()
{
	return steps;
}
