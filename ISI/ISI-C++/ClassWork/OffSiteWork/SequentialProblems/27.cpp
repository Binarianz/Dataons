#include <iostream>
using namespace std;
float taxCalulator(bool, bool, int, float);
int main()
{
    bool IsMarried, IsNew;
    int NoofChildren;
    float BasicSalary, TotalTax;
    cout << " Is the person is married(true/false)";
    cin >> IsMarried;
    cout << " Is the person is new to the province(true/false)";
    cin >> IsNew;
    cout << "Enter the number of childern";
    cin >> NoofChildren;
    cout << "Enter the salary";
    cin >> BasicSalary;
    if (BasicSalary > 0 && BasicSalary < 18000)
    {
        cout << taxCalulator(IsMarried, IsNew, NoofChildren, BasicSalary);
    }
}
float taxCalulator(bool IsMarried, bool IsNew, int NoofChildren, float BasicSalary);
{
    bool IsMarried, IsNew;
    int NoofChildren;
    float BasicSalary, totalTax;
    totalTax = BasicSalary if (IsMarried)
    {
    }
}