//#include "pch.h"
#include <iostream>

#include <fstream>
#include <string>
#include <time.h>
using namespace std;
string guessWord(string choice);
int main()
{
    int i, j, k, m = 0;
    bool flag = false;
    char ch;
    j = 7;
    string guesssWord = "alexander";
    string flase = "";
    cout << "\nEnter your guess : ";
    cin >> ch;

    for (i = 0; i < guesssWord.size(); i++)
    {

        if (guesssWord[i] == ch)
        {
            flase += ch;
            flag = true;
            cout << ch;
            //j--;
        }
        else
        {
            //flag = false;
            cout << "_ ";
        }
    }
    if (flag == false)
    {
        j--;
    }
    cout << "\nyou have " << j << " guesses\n";

    system("pause");
}
string guessWord(string choice)
{
    for (i = 0; i < guesssWord.size(); i++)
    {

        if (guesssWord[i] == ch)
        {
            flase += ch;
            flag = true;
            cout << ch;
            //j--;
        }
        else
        {
            //flag = false;
            cout << "_ ";
        }
    }
    if (flag == false)
    {
        j--;
    }
    cout << "\nyou have " << j << " guesses\n";
}