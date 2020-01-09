#include "StringConversions.h"
using namespace std;

string doubleToString(double value)
{
	unsigned int precision = 0;
	while (true)
	{
		double multiple = pow(10, precision) * value;
		long long truncated = (long long)multiple;
		if (multiple != truncated)
			precision++;
		else
			break;
	}
	return doubleToString(value, precision);
}

string doubleToString(double value, unsigned int precision)
{
	stringstream stream;
	stream.precision(precision);
	stream << std::fixed;
	stream << value;
	return stream.str();
}

string doubleToCurrencyString(double value)
{
	return "$" + doubleToString(value, 2);
}
