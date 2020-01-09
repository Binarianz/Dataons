#include<iostream>
#include<string>
#include"Point3D.h"
using namespace std;

int main()
{
	//Class Types
	Point3D myPoint=Point3D(2,3,4);
	//OR
	//Point3D myPoint(2, 3, 4);

	//mypoint.getX();

	//int x = mypoint.getX();
	//mypoint.setX(2);
	//mypoint.setY(3);
	//mypoint.setZ(4);

	//mypoint.x = 2;
	//mypoint.y = 3;
	////mypoint.z = 4;
	cout << "MyPoint.x : " << myPoint.getX() << endl;
	cout << "MyPoint.y : " << myPoint.getY() << endl;
	cout << "MyPoint.z : " << myPoint.getZ() << endl;
	
	//Fundamental types
	int a = 5;
	bool b = true;
	char c = 'x';
	//Array types
	int intArray[5] = {2,4,6,8,10};
	

}