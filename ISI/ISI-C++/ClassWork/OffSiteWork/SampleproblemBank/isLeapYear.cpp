#include<iostream>
using namespace std;
bool isLeapYear(int year);
int main()
{
    int year;
    cout<<"\nEnter the year : ";
    cin>>year;
    isLeapYear(year)?cout<<"\nIt is a leap year\n":cout<<"\nIt is not a leap year\n";
    system("pause");
}
bool isLeapYear(int year)
{
if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
               return true;
        }
        else
             return true;
    }
    return 0;
}