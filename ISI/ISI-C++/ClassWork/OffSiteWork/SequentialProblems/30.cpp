#include<iostream>
using namespace std;
int main()
{
    float side1,side2,side3;
    cout<<"Please enter the three sides of the triangle\n";
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3)
    {
        cout<<"It's An equilateral triangle (three equal sides)";
    }
    else if(side1==side2 || side2==side3 || side3==side1)
    {
        cout<<"It's An isosceles triangle (two equal sides)";
    }
    else
    {
       cout<<"It's A scalene triangle (three different sides)";
    }
    
}