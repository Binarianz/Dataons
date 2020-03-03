#include<iostream>
#include"ConsoleMenu.h"
using namespace std;

int main()
{
	string options[] = { "option1","option2","option3" };
	string options2[] = { "option11","option22","option33" };

	ConsoleMenu c1(options, 3);
	ConsoleMenu menu = c1;
	
	//menu.displayOptions();
	c1.setOptions(options, 3);
	//c1.displayOptions();
	int k=c1.displayAndGetSelection();
	//cin.get();
	//menu.displayOptions();
	cout << "option selected is : " << k<<endl;
	cin.get();
	//ConsoleMenu c1(options2, 3);
	c1.setOptions(options2, 3);
	//c1.displayOptions();
	int k1 = c1.displayAndGetSelection();
	cout << "option selected is : " << k1;
	//int staticIntArray[3] = { 11,22,33 };
	//cout << staticIntArray[0] << endl;
	//cout << *staticIntArray<<endl;
	//cin.get();
	//cout << staticIntArray[1] << endl;
	//cout << *(staticIntArray + 1) << endl;
	//cin.get();
	//cout << "StaticIntArray = " <<(int) staticIntArray << endl;
	//cout << "StaticIntArray+1 = " << (int)staticIntArray+1 << endl;
	//cout << "StaticIntArray+2 = " << (int)staticIntArray+2 << endl;
	//cin.get();
	//cout << "&staticIntArray[0]" << (int)&staticIntArray[0] << endl;
	//cout << "&staticIntArray[1]" << (int)&staticIntArray[1] << endl;
	//cout << "&staticIntArray[2]" << (int)&staticIntArray[2] << endl;
}