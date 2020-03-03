#include "pch.h"
#include <iostream>
using namespace std;
void fact(int n)
{
	static int n1 = n, n2 = 1, n3;
	if (n > 0)
	{
		n3 = n3+(n-1);
		//n1 = n2;
		//n2 = n3;
		
		fact(n - 1);
	}
	cout << n3 << " ";
}
int main()
{
	int n;
	cout << "Enter the number of elements";
	cin >> n;
	cout << "factorial is";
	//cout << "0 "
	//	<< "1 ";
	fact(n);
	return 0;
}