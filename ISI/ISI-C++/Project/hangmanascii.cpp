//#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void hangmanAscii(int height);
int main()
{
	hangmanAscii(4);
	cout << endl;
	system("pause");
}

void hangmanAscii(int height)
{
	string hangManAscii[19];
	hangManAscii[0] = "|         |\n";
	hangManAscii[1] = "|         0\n";
	hangManAscii[2] = "|        /";
	hangManAscii[3] = "|";
	hangManAscii[4] = "\\  \n";
	hangManAscii[5] = "|        /";
	hangManAscii[6] = " \\  \n";
	for (int i = 0; i <= height; i++)
	{
		cout << hangManAscii[i];
	}
}