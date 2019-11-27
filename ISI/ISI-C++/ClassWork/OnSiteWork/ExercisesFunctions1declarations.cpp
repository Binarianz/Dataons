//#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int getValidInput(string, string, int, int);
int sum(int a, int b);
float volume(float a);
int largest(int a, int b);
int sumRange(int min, int max);
void validation();
int inputVal();
float roundUp(float a, int b);
void drawing(int height);
float powerOfA(float a, unsigned int n);
bool prime(int value);
int main()
{
    cout << prime(11);
    //inputVal();
    //drawing(15);

    system("pause");
}
int getValidInput(string msg, string emsg, int min, int max)
{
    int toReturn;
    cout << msg;
    cin >> toReturn;
    while (cin.fail() || cin.peek() != '\n' || toReturn <= min || toReturn >= max)
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << emsg;
        cin >> toReturn;
    }
    cin.ignore(512, '\n');
    return toReturn;
}
int sum(int a, int b)
{
    return a + b;
}
float volume(float a)
{
    return a * a * a;
}
int largest(int a, int b)
{
    return (a > b ? a : b);
}
int sumRange(int min, int max)
{
    int sum = 0;
    while (min <= max)
    {
        sum = sum + min;
        min++;
    }

    return sum;
}
void validation()
{
    int value;
    value = getValidInput("\nEnter a value : ", "\nWrong value, Enter : ", 0, 1000);
}
int inputVal()
{
    int min = 0, max = 0, number = 0;
    min = getValidInput("\nEnter min value : ", "\nWrong min value, Enter : ", 0, 1000);
    max = getValidInput("\nEnter max value : ", "\nWrong max value, Enter : ", min, 1000);
    number = getValidInput("\nEnter integer value : ", "\nWrong integer value, Enter : ", 0, 1000);
    number >= min &&number <= max ? cout << "Inside the range\n" : cout << "Not in the range\n";
    return 0;
}

float roundUp(float a, int b)
{
    //b++;
    float number = 0;
    int temp, number2;
    number2 = powerOfA(10, b + 1);
    temp = a * number2;
    if ((temp % 10) >= 5)
    {
        temp = temp + 5;
        temp = temp / 10;
    }
    else
    {
        temp = temp / 10;
    }
    number = (float)temp / (number2 / 10);
    return number;
}
void drawing(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
float powerOfA(float a, unsigned int n)
{
    float temp = 1;
    for (int i = 0; i < n; i++)
    {
        temp = temp * a;
    }
    return temp;
}
bool prime(int value)
{
    for (int i = 2; i < value / 2; i++)
    {
        if (value % i == 0)
            return false;
    }

    return true;
}