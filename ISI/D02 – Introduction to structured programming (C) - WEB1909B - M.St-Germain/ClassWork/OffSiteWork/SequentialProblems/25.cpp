#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter three numbers\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "The first number is largest. \n";
    }
    else if (b > c && b > a)
    {
        cout << "The second number is largest. \n";
    }
    else
    {
        cout << "The third number is largest. \n";
    }

    system("pause");
    return 0;
}