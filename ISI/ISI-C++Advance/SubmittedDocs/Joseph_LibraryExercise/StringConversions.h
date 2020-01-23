#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class StringConversions
{
public:
	static string boolToString(bool value);
	static string doubleToString(double value);
	static string doubleToString(double value, unsigned int precision);
	static string doubleToCurrencyString(double value);
};

