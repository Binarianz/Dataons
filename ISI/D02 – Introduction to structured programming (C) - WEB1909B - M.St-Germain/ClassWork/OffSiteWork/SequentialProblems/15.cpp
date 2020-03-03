#include <iostream>
using namespace std;
int main()
{
    float totalAmount, currentBalalnce, widMoney;
    cout << "Enter the current balalnce\n";
    cin >> currentBalalnce;
    cout << "Enter the amount to taken\n";
    cin >> widMoney;
    if (currentBalalnce > widMoney)
    {
        cout << "The new balance is = " << currentBalalnce - widMoney << endl;
    }
    else
    {
        cout << "ERROR! you dont have enough credit in your account \n";
    }
    system("pause");
    return 0;
}