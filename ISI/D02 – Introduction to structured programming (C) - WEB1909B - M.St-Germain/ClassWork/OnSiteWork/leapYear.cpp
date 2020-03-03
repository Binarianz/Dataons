#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int main()
{
    int y1 = 1700, y2 = 2020;
    int no = 0;
    while (y1 <= y2)
    {
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        {
            no++;
        }
        y1++;
    }
    cout << "the number of leapyears between : " << no << endl;
    cin.get();
}