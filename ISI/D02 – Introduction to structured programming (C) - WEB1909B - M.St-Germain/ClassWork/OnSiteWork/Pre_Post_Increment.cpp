#include <iostream>
using namespace std;
int main()
{
	int value = 5, result;
	result = ++value + 5;
	cout << "PRE-INCREMENT\n";
	cout << result << endl;
	cout << value << endl
		 << endl;
	cout << "POST-INCREMENT\n";
	result = value++ + 5;
	cout << result << endl;
	cout << value << endl;
	system("pause");
	return 0;
}