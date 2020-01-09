#include<iostream>
#include<string>
#include"Date.h"
using namespace std;
int main()
{
	Date myDate = Date(66, 7, 2005);
	Date mydate2 = Date(12, 1, 2001);
	//test
	cout << "MyPoint.x : " << myDate.getDay() << endl;
	cout << "MyPoint.y : " << myDate.getMonth() << endl;
	cout << "MyPoint.z : " << myDate.getYear() << endl<<endl<<endl;
	cout << "the differece is : " << myDate.getYearsBetween(mydate2) << endl;
	//myDate.display();
}