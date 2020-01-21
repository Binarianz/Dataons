#include <iostream>
using namespace std;

void ArrayFunction(int array[]);

void ArrayFunction(int array[])
{
    //Address of the array’s first element
    cout << array << endl;
    //Array’s first element
    cout << *array << endl;
}
int main()
{
    int x = 5;
    int *xPtr = &x;
    int **p = &xPtr;
    cout << &p;
    return 0;
}