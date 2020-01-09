#pragma once
#include<iostream>
#include<string>
using namespace std;
//class declarations
class Point3D
{
	//method declaration
private:
	double x, y, z;
	bool atOrigin;
public:
	Point3D();
	Point3D(double x, double y, double z);
	double getX();
	double getY();
	double getZ();
	bool isAtOrigin();

	string toString();
	void display();
	//Setter methods
	//void setX(double x)
	//{
	//	Point3D::x = x;
	//	//OR
	//	this->x = x;
	//	//OR
	//	(*this).x = x;
	//}
	//void setY(double y)
	//{
	//	this->y = y;
	//}
	//void setZ(double z)
	//{
	//	this->z = z;
	//}
	//construcor(used for replacement as setter method)
	

};