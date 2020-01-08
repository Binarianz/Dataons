#include <iostream>
using namespace std;
int main()
{
    double x = 123.456;
    double *xptr = &x;
    cout << "\nThe value of X is : " << x;
    *xptr = 3.14159;
    cout << "\nThe value of X is : " << x;
}