#include <iostream>
#include <string>
#include"pointerFile.h"
using namespace std;
int main()
{
	int number1, number2, number3;
	readThreeInts(&number1, &number2, &number3);
	displayThreeInts(&number1, &number2, &number3);
	sortThreeInts(&number1, &number2, &number3);
	displayThreeInts(&number1, &number2, &number3);
	cout << "fdfdfd";
	cin >> number1;

}