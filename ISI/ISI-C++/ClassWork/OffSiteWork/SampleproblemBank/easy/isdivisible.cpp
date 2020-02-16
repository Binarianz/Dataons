#include<iostream>
using namespace std;
bool isDivisible(int a, int b);
int main()
{
    int a,b;
    cout<<"\nEnter the two numbers : ";
    cin>>a>>b;
    isDivisible(a,b)?cout<<"\nIs divisible \n":cout<<"\nIs not divisible\n";
}
bool isDivisible(int a, int b)
{
   if (a%b==0)
   {
     return true;
   }
   return false;
}