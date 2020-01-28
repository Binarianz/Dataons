#pragma once
#include<iostream>
#include<string>
using namespace std;
class BaseClass
{
	int idNo;
	string name;
public:
	BaseClass();
	BaseClass(int idNo, string name);
	void setidNo(int);
	void setname(string);
	int getidNo();
	string getname();

};

