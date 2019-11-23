#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "Enter one numbers\n";
    cin >> a;
    if (a >= 1 && a <= 5)
    {
        cout << "The number is inside or equal to the limits.\n";
    }
    else
    {
        cout << "The number is outside the limits.\n";
    }

    system("pause");
    return 0;
}