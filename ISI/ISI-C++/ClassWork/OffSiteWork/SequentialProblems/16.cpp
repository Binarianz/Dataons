#include <iostream>
using namespace std;
int main()
{
    int days;
    float totalAmount = 0, noOfKw;
    cout << "Enter the number of days electricity provided\n";
    cin >> days;
    totalAmount = totalAmount + (days * 0.50);
    cout << "Enter the number of kilowatt hours (kWh) consumed\n";
    cin >> noOfKw;
    if (noOfKw > 200)
    {
        totalAmount = totalAmount + 60 + (0.2 * (noOfKw - 200));
    }
    else
    {
        totalAmount = totalAmount + (noOfKw * 0.3);
    }
    cout << "The total amount to be paid = " << totalAmount << endl;
    system("pause");
    return 0;
}