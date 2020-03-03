#include <iostream>
using namespace std;
int validationInput(int);
int main()
{
    int value;
    cout << "Enter a numerical value : ";
    cin >> value;
    value = validationInput(value);
    cout << "The entered value is = " << value;
}
int validationInput(int value)
{
    //int value;
    while (cin.fail() || cin.peek() != '\n')
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << "Warning - please enter a valid value !: ";
        cin >> value;
    }
    return value;
}