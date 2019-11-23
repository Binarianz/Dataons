#include <iostream>
using namespace std;
int main()
{
    float kpa, atm;
    cout << "Enter the pressure data in kilopascal units.\n";
    cin >> kpa;
    atm = kpa * 0.00986923;
    cout << "The atmospheric pressure in atmosphere unit is = " << atm << endl;
    system("pause");
    return 0;
}