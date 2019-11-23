#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter two numbers\n";
    cin >> number1 >> number2;
    if ((number1 % number2) == 0)
        cout << "The second number a multiple of first number \n";
    else
    {
        cout << "The second number not multiple of first number \n";
    }

    system("pause");
    return 0;
}