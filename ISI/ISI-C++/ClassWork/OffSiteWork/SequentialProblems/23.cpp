#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter three numbers\n";
    cin >> a >> b >> c;
    if (a == b && a == c)
    {
        cout << "The three numbers are identical \n";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Two of the numbers are identical. \n";
    }

    system("pause");
    return 0;
}