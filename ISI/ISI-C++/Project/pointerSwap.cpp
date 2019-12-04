#include <iostream>
#include <string>
using namespace std;
void swap(int *a, int *b);
int main()
{
    int x, y;
    x = 5;
    y = 10;
    swap(&x, &y);
    cout << x << endl
         << y;
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}