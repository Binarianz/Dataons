#include <iostream>
using namespace std;
int main()
{
    int number1, number2, number3;
    cout << "Enter the value for number1, number2, number3\n";
    cin >> number1 >> number2 >> number3;
    number1 = number2;
    number2 = number3;
    number3 = number1;
    cout << "\n\n\nThe changed values are : \n"
         << number1 << endl
         << number2 << endl
         << number3 << endl;
    system("pause");
    return 0;
}