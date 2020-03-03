#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
bool slotcheck(int count);
int main()
{
    string guessWord;
    int count;
    bool k = false;
    cout << "\nEnter the number of size";
    cin >> count;
}
bool slotcheck(int count)
{
    for (int i = 0; i < count; i++)
    {
        int now = 0, later = 0, count, temp;

        now = (rand() % (count - 1)) + count;
        cout << "| " << now;

        if (now != later)
        {
            return false;
        }

        later = now;
    }
    cout << "\nyou won";
    return true;
}