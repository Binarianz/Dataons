#include "pch.h"
#include <iostream> 
using namespace std;
int main()
{
	int x,a,x1;
	cout << "Enter a value ";
	cin >> x;
	x1 = x;
	if (x < 0)
	{
		x = (x*x) - (3*x);
		a = 0;
	}
	else if (0 < x && x<= 10)
	{
		x = x - 3;
		a =1 ;
	}
	else if (10 < x && x <= 12)
	{
		x = x + 7;
		a = 2;
	}
	else if (12 < x && x <= 15)
	{
		x = x - 5;
		a = 3;
	}
	else
	{
		x = x + 7;
	}
	cout <<"The value after calculation using if else is = "<< x <<endl;
	switch (a)
	{
	case 0:
		x1 = (x1*x1) - (3 * x1);
		break;
	case 1:
		x1 = x1 - 3;
		break;
	case 2:
		x1 = x1 + 7;
		break;
	case 3:
		x1 = x1 - 5;
		break;
	default:
		x1 = x1 + 7;
		break;
	}
	cout << "\n\nThe value after calculation using switch is = " << x1 << endl;
	system("pause");
	return 0;
}