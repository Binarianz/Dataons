#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    int a,b;
    cout<<"Enter two numbers to be claculated for gcd : ";
    cin>>a>>b;
    cout<<"\nThe gcd is : "<<gcd(a,b);
}
int gcd(int a,int b)
{
 if (b == 0) 
        return a; 
return gcd(b, a % b); 
}