#include <iostream>
using namespace std;
int main()
{
    int number1;
    cout << "Enter a number\n";
    cin >> number1;
    if ((number1 % 2) == 0)
        cout << "The given number is even \n";
    else
    {
        cout << "The given number is odd \n";
    }

    system("pause");
    return 0;
}