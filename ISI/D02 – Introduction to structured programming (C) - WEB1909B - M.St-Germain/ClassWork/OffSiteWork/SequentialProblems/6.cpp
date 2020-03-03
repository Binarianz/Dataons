#include <iostream>
using namespace std;
int main()
{
    float numberOfVehicles, toatlAmountSold, gSalary;
    cout << "\nNumber of vehicle this person sold and total amount of all their sale.\n";
    cin >> numberOfVehicles >> toatlAmountSold;
    gSalary = 400 + (numberOfVehicles * 200) + (toatlAmountSold * 0.05);
    cout << "\nThe total compensation paid to this salespeople is = " << gSalary << endl;
    system("pause");
    return 0;
}