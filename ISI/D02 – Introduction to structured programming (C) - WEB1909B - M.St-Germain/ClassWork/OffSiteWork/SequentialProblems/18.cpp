#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter two numbers\n";
    cin >> number1 >> number2;
    if ((number1 % number2) == 0)
        cout << "The first number is a multiple of second number \n";
    else
    {
        cout << "The first number not multiple of second number \n";
    }

    system("pause");
    return 0;
}