#include"Point3D.h"
using namespace std;
//method defentions
Point3D::Point3D(double x, double y, double z)//No return types and return values and name must be same as the class
{
	this->x = x;
	this->y = y;
	this->z = z;

}
Point3D::Point3D():Point3D(0,0,0)
{}
//same as below commented code
//Point3D::Point3D()
//{
//	Point3D(0, 0, 0);
//}
// same as below commented code
//Point3D::Point3D()
//
//	this->x = 0;
//	this->y = 0;
//	this->z = 0;
//
//
double Point3D::getX()//Getter method
{
	return x;
}
double Point3D::getY()//Getter method
{
	return y;
}
double Point3D::getZ()//Getter method
{
	return z;
}
bool Point3D::isAtOrigin()//getter only for bool
{
	return atOrigin;
}
string Point3D::toString()
{
	return  "("+to_string(x) + ", " + to_string(y) + ", " + to_string(z) + ")";
	
}
void Point3D::display()
{
	cout << toString() << endl;
}