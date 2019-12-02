#include<iostream>
using namespace std;
int main()
{
	int i, j;
	string hangManAscii[19];
	hangManAscii[0] = "|         |\n";
	hangManAscii[1] = "|         0\n";
	hangManAscii[2] = "|        /";
	hangManAscii[3] = "|";
	hangManAscii[4] = "\\  \n";
	hangManAscii[5] = "|        /";
	hangManAscii[6] = " \\  \n";
	for (i = 0; i < 7; i++)
	{
		cout << hangManAscii[i];

	}
	system("pause");

}