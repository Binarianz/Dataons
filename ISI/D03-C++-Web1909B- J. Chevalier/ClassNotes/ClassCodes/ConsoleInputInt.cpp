#include <iostream>
#include <string>
using namespace std;

int readInt();
int readInt(int min, int max);
int readInt(string message);
int readInt(string message, int min, int max);

int readInt()
{
	int cinInt;
	cin >> cinInt;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "    Error: Invalid integer format" << endl;
		cin >> cinInt;
	}
	return cinInt;
}

int readInt(int min, int max)
{
	int cinInt = readInt();
	while (cinInt < min || cinInt > max)
	{
		cout << "    Error: Out of bounds. " << cinInt << " is not between " << min << " and " << max << endl;
		cinInt = readInt();
	}
	return cinInt;
}

int readInt(string message, int min, int max)
{
	cout << message << endl;
	return readInt(min, max);
}

int readInt(string message)
{
	cout << message << endl;
	return readInt();
}
