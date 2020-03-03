#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Plase enter your age";
    cin >> age;
    if (age >= 18)
    {
        cout << "\n You can come in the bar";
    }
    else
    {
        cout << "\nYou are not allowed to enter into the bar";
    }
}