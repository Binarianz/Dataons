#include "StringConversions.h"
using namespace std;

string StringConversions::boolToString(bool value)
{
	return (value) ? "True" : "False";
}

string StringConversions::doubleToString(double value) // Automatic precision
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

string StringConversions::doubleToString(double value, unsigned int precision)
{
	stringstream stream;
	stream.precision(precision);
	stream << std::fixed;
	stream << value;
	return stream.str();
}

string StringConversions::doubleToCurrencyString(double value)
{
	return "$" + doubleToString(value, 2);
}
