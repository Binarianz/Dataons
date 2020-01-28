#include "BaseClass.h"

BaseClass::BaseClass()
{
}

BaseClass::BaseClass(int idNo, string name)
{
	idNo = idNo;
	name = name;
}

void BaseClass::setidNo(int a)
{
	this->idNo = a;
}

void BaseClass::setname(string a)
{
	this->name = a;
}

int BaseClass::getidNo()
{
	return idNo;
}

string BaseClass::getname()
{
	return name;
}
