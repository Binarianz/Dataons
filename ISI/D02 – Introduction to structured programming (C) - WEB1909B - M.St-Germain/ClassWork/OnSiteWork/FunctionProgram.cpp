#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
    int a, sum = 1;
    for (a = n; a > 0; a--)
    {
        sum = sum * a;
    }
    return sum;
}
int main()
{
    float x, n, result = 0, i;
    cout << "Enter the value for x and n\n";
    cin >> x >> n;
    for (i = 0; i <= n; i++)
    {
        result = (result + (pow(x, i) / (factorial(i))));
    }
    cout << "Result = " << result;

    system("pause");

    return 0;
}