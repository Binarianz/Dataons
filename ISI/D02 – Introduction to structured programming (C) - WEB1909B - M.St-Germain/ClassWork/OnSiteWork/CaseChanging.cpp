#include <iostream>
using namespace std;
int main()
{
    char input, input2;
    do
    {
        cout << "Plase enter your letter\n";
        cin >> input;
        if ((int)input > 64 && (int)input < 123)
        {
            if ((int)input > 64 && (int)input < 91)
            {
                cout << (char)((int)input + 32);
            }
            else
            {
                cout << (char)((int)input - 32);
            }
        }
        else
        {
            cout << "invalid input";
        }
        cout << "\nDo you want to continue(y/n)\n";
        cin >> input2;
    } while (input2 == 'y');
}