#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int validationInput(int);
void guessgame(int min, int max);
int random(int min, int max);
int getValidInput(string msg, string emsg, int min, int max);

int main()
{
    int min = 0, max = 0;
    getValidInput("\nEnter a higher max\n", "\nEnter a lower max\n", min, max);
}
void guessgame(int min, int max)
{
    int guNo = 10, guessnumber, randonnumber;
    randonnumber = random(min, max);
    while (guNo != 0)
    {
        cout << "\nYou have " << guNo << " guesses \n";
        cout << "\nEnter your guess : ";
        cin >> guessnumber;
        guessnumber = validationInput(guessnumber);

        cout << random << "\n\n\n\n";
        if (randonnumber == guessnumber)
        {
            cout << "\nYou won";
            guNo = 0;
        }
        else if (randonnumber < guessnumber)
        {
            cout << "\nLower value";
            guNo--;
        }
        else
        {
            cout << "\nHigher value";
            guNo--;
        }
    }
}
int validationInput(int value)
{
    //int value;
    //cout<< "\nEnter the value : ";
    while (cin.fail() || cin.peek() != '\n')
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << "Warning - please enter a valid value !: ";
        cin >> value;
    }
    return value;
}
int random(int min, int max)
{
    int k;
    srand(time(NULL));
    k = rand();
    k = (k % (max - min + 1)) + min;
    return k;
    //cout << "random no : is : " << k;
}
int getValidInput(string msg, string emsg, int min, int max)
{

    bool k;
    cout << "\nEnter min value : ";
    cin >> min;
    min = validationInput(min);
    cout << "\n Enter max value: ";
    cin >> max;
    max = validationInput(max);
    do
    {

        k = false;
        if (min < max)
        {
            k = true;
        }
        else if (min > max)
        {
            cout << emsg;
            cin >> min;
            min = validationInput(min);
            k = false;
        }
        else
        {
            cout << msg;
            cin >> max;
            min = validationInput(max);
            k = false;
        }

    } while (k == false);
    guessgame(min, max);
    return 0;
}