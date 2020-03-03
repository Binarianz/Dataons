#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter two valuesof coins(heads=1,tails=0)\n";
    cin >> a >> b;
    if (a == 1 && b == 1)
    {
        cout << "The player wins $10 \n";
    }
    else if (a == 1 && b == 0)
    {
        cout << "The player wins $5 \n";
    }
    else
    {
        cout << "The player loses\n";
    }

    system("pause");
    return 0;
}