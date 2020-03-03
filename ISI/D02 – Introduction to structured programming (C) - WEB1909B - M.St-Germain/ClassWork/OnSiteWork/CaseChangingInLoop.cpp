#include <iostream>
using namespace std;
char toLower(char);
int main()
{
    char input, input2, a;
    do
    {
        cout << "Plase enter your letter\n";
        cin >> input;
        if ((int)input > 64 && (int)input < 123)
        {
            cout << toLower(input);
            //cout << a;
        }
        else
        {
            cout << "invalid input";
        }
        cout << "\nDo you want to continue(y/n)\n";
        cin >> input2;
    } while (input2 == 'y');
}
char toLower(char input)
{
    //char input;

    if ((int)input > 64 && (int)input < 91)
    {
        return (char)((int)input + 32);
    }
    else
    {
        return (char)((int)input - 32);
    }
}