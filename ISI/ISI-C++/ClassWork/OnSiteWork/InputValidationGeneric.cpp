#include <iostream>
#include <string>
using namespace std;
int validationInput(int);
int getValidInput(string msg, string emsg, int min, int max);
int main()
{
    int age = getValidInput("please enter your age : ", "Invalid age,Please enter your age : ", 0, 120);
    int month = getValidInput("Please enter your month of birth : ", "Invalid month ,Please enter your month : ", 1, 12);
    int day = getValidInput("Please enteryour day of birth : ", "Invalid day ,Please enter your day : ", 1, 7);
    cout << "Age : " << age << " Month : " << month << " Day : " << day;
}
int getValidInput(string msg, string emsg, int min, int max)
{
    int data1 = 0;
    cout << msg;
    bool k;
    cin >> data1;
    //data1 = validationInput(data1);
    do
    {
        k = false;
        if (data1 >= min && data1 <= max)
        {
            k = true;
        }

        else
        {
            cout << emsg;
            cin >> data1;
            k = false;
        }
    } while (k == false);
    return data1;
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