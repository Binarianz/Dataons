#pragma once
#include<iostream>
#include<string>
using namespace std;
class testClass
{
private:
	int a, b, c;
public:
	testClass();
	testClass(int x, int y, int z);
	int getA();
	int getB();
	int getC();
};

