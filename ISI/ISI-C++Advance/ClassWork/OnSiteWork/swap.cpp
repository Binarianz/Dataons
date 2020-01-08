#include <iostream>
using namespace std;
void swapInts(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10, b = 12;
    cout << "A=" << a << "  B=" << b << endl;
    swapInts(&a, &b);
    cout << "A=" << a << "  B=" << b << endl;
}