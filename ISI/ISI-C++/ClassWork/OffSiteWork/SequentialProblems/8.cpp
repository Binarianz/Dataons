#include <iostream>
using namespace std;
int main()
{
    float kpa, atm;
    cout << "\nEnter the pressure data in kilopascal units :";
    cin >> kpa;
    atm = kpa * 0.00986923;
    cout << "\nThe atmospheric pressure in atmosphere unit is = " << atm << endl;
    system("pause");
    return 0;
}