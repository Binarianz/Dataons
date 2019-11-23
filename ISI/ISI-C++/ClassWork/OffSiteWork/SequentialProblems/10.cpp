#include <iostream>
using namespace std;
int main()
{
    float foodExpences, commonExpences, rent, publicTransitPass, monthlyBills;
    float payCheques1, payCheques2;
    cout << "Enter the weekly food expences\n";
    cin >> foodExpences;
    cout << "Enter the weekly common expences\n";
    cin >> commonExpences;
    cout << "Enter the monthly Public transit pass expences\n";
    cin >> publicTransitPass;
    cout << "Enter the monthly rent expences\n";
    cin >> rent;
    cout << "Enter the Total of monthly bills\n";
    cin >> monthlyBills;
    cout << "Enter paycheque 1 amount\n";
    cin >> payCheques1;
    cout << "Enter paycheque 2 amount\n";
    cin >> payCheques2;
    cout << "The total expence amount is = " << (4 * (foodExpences + commonExpences)) + publicTransitPass + rent + monthlyBills << endl;
    cout << "The total income amount is = " << payCheques1 + payCheques2 << endl;
    cout << "The total difference between salary and expensesis = " << (payCheques1 + payCheques2) - ((4 * (foodExpences + commonExpences)) + publicTransitPass + rent + monthlyBills) << endl;
    system("pause");
    return 0;
}