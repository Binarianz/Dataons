#include <iostream>
#include <string>
using namespace std;
int main()
{
    int *p;
    int x = 5;
    p = &x;
    x = 10;
    *p = 0;
    cout << "x  = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "p  = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&p = " << &p << endl
         << endl;
    cin.get();
}