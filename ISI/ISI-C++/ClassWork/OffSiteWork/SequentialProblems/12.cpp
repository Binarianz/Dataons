#include <iostream>
using namespace std;
int main()
{
    float number1, tip;
    cout << "Enter the bill amount\n";
    cin >> number1;
    if (number1 > 1.0)
    {
        cout << "The amount to pay as a tip to a server in a restaurant is = " << number1 * 0.15 << endl;
    }
    system("pause");
    return 0;
}