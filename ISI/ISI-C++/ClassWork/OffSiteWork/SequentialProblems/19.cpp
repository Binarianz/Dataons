#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers\n";
    cin >> a >> b >> c;
    if ((a + b) == c)
    {
        cout << "the first two numbers sums to last number \n";
    }
    else if ((a + c) == b)
    {
        cout << "the first and last numbers sums to the second number \n";
    }
    else if ((b + c) == a)
    {
        cout << "the last two numbers are sums to first number \n";
    }
    else
    {
        cout << "No solution!! \n";
    }

    system("pause");
    return 0;
}