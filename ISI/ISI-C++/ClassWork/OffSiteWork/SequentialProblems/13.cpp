#include <iostream>
using namespace std;
int main()
{
    int noOfDisk;
    bool clubZ;
    float totalAmount;
    cout << " Are you a member of Club Z(press 1 for Yes and 0 for No)\n";
    cin >> clubZ;
    cout << "Enter the number of diskettes\n";
    cin >> noOfDisk;
    if (noOfDisk > 24)
    {
        totalAmount = noOfDisk * 0.7;
    }
    else
    {
        totalAmount = noOfDisk;
    }
    if (clubZ == 1)
    {
        totalAmount = totalAmount * 0.98;
    }
    cout << "The total amount to be paid = " << totalAmount << endl;
    system("pause");
    return 0;
}