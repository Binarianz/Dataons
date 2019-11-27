#include <iostream>
using namespace std;
int main()
{
    float grossSalary = 0, hourlyRate, numberOfHours;
    cout << "\nEnter hourly rate and the number of hours worked.\n";
    cin >> hourlyRate >> numberOfHours;
    grossSalary = hourlyRate * numberOfHours;
    cout << "\nTotal gross salary for a week is = " << grossSalary << endl;
    system("pause");
    return 0;
}