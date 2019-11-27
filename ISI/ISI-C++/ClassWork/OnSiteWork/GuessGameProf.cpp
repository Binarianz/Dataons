#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int getValidInput(string, string, int, int);
int main()
{
    srand(time(NULL));
    int min, max, guess, numToGuess;
    min = getValidInput("Enter the minimum value : ", "Invalid minimum value ", 0, 9999);
    min = getValidInput("Enter the maximum value : ", "Invalid maximum value ", min, 9999);
    numToGuess = (rand() % (max - min) + min);
    for (int i = 0; i < 10; i++)
    {
        guess = getValidInput("Enter the  value : ", "Invalid  value ", min, max);
        if (numToGuess == guess)
        {
            cout << "\nYou won";
            break;
        }
        else if (numToGuess < guess)
        {
            cout << "\nLower value";
        }
        else
        {
            cout << "\nHigher value";
        }
    }
}
int getValidInput(string msg, string emsg, int min, int max)
{
    int toReturn;
    cout << msg;
    cin >> toReturn;
    while (cin.fail() || cin.peek() != '\n' || toReturn >= min || toReturn <= max)
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << emsg;
        cin >> toReturn;
    }
    cin.ignore(512, '\n');
}