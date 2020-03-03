#include <iostream>
using namespace std;
int main()
{
    float number1, number2;
    cout << "Enter two numbers\n";
    cin >> number1 >> number2;
    if (number1 > number2)
        cout << "The first number entered is larger \n";
    else
    {
        cout << "The second number entered is larger \n";
    }

    system("pause");
    return 0;
}