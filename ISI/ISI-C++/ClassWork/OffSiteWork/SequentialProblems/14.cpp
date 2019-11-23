#include <iostream>
using namespace std;
int main()
{
    int noOfCopies;
    float totalAmount;
    cout << "Enter the number of copies\n";
    cin >> noOfCopies;
    if (noOfCopies > 100)
    {
        totalAmount = 5 + (0.03 * (noOfCopies - 100));
    }
    else
    {
        totalAmount = noOfCopies * 0.05;
    }
    cout << "The total amount to be paid = " << totalAmount << endl;
    system("pause");
    return 0;
}