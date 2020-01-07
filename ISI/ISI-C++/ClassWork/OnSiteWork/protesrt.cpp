//#include "pch.h"
//#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
//#include <algorithm>
using namespace std;
string erroeword;
string currentWord = "";
string masterWord = "";

int choice = 0, errorCounter = 0;
string temp1, temp2;
string guess;

void hangmanAscii(int height);
string getMasterWord();
string guessCheck(string masterWord, string guessWord, string currrentWord);
int getValidInput(string msg, string emsg, int min, int max);
void continueGame();
int main()
{
    hangmanAscii(7);
    cout << "\n\n\n";
    masterWord = getMasterWord();
    string currentWord1(masterWord.length(), '_');
    currentWord = currentWord1;
    cout << masterWord << endl;
    while (choice != 2)
    {
        continueGame();
        while (masterWord == guess || masterWord == currentWord)
        {
            //system("CLS");
            erroeword = "";
            cout << "you won and the correct answer is : " << masterWord << endl;
            hangmanAscii(7);
            cout << "\n\n\n";
            masterWord = getMasterWord();
            string currentWord(masterWord.length(), '_');
            cout << masterWord << endl;
            continueGame();
        }
        while (errorCounter == 7)
        {
            erroeword = "";
            cout << "you failed and the correct answer is : " << masterWord << endl;
            hangmanAscii(7);
            cout << "\n\n\n";
            masterWord = getMasterWord();
            string currentWord(masterWord.length(), '_');
            cout << masterWord << endl;
            continueGame();
        }
    }

    system("pause");
}

/*//////////////////////hangman printing function/////////////////////*/
void hangmanAscii(int height)
{
    string hangManAscii[19];
    hangManAscii[0] = "|=========|\n";
    hangManAscii[1] = "|         0\n";
    hangManAscii[2] = "|        /";
    hangManAscii[3] = "|";
    hangManAscii[4] = "\\  \n";
    hangManAscii[5] = "|        /";
    hangManAscii[6] = " \\  \n";
    for (int i = 0; i <= height; i++)
    {
        cout << hangManAscii[i];
    }
    cout << endl
         << "Error word is : " << erroeword << endl;
    cout << "\n\n";
}

/*//////////////////////getting master word function/////////////////////*/
string getMasterWord()
{
    string line;
    int randomNumber, rLine = 0, stringLength = 0;
    srand(time(NULL));
    randomNumber = rand() % 20;
    ifstream myfile("words.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            ++rLine;
            if (randomNumber == rLine)
            {
                return line;
            }
        }
        myfile.close();
    }

    else
        cout << "Unable to open file";
    return line;
}
/*/////////////////////////////////////guesscheck function/////////////////////////*/
string guessCheck(string masterWord, string guessWord, string currrentWord)
{
    bool flag = false;

    if (guessWord.length() == 1)
    {
        for (int i = 0; i < masterWord.size(); i++)
        {

            if (masterWord[i] == guessWord[0])
            {
                currrentWord[i] = guessWord[0];
                flag = true;
            }
            else
            {
                if (currrentWord[i] == '_')
                {
                    currrentWord[i] = '_';
                }
            }
        }
        if (flag == false)
            erroeword += guessWord[0];
        erroeword += " ";
    }
    else if (masterWord.compare(guessWord) == 0)
    {
        currrentWord = masterWord;
    }
    else
    {
        erroeword += guessWord + " ";
    }

    return currrentWord;
}

/*//////////////////////////////// validation function ////////////////////////*/
int getValidInput(string msg, string emsg, int min, int max)
{
    int toReturn;
    cout << msg;
    cin >> toReturn;
    while (cin.fail() || cin.peek() != '\n' || toReturn < min || toReturn > max)
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << emsg << msg;
        cin >> toReturn;
    }
    cin.ignore(512, '\n');
    return toReturn;
}
void continueGame()
{
    choice = getValidInput("1.Play\n2.Exit\nEnter your choice : ", "\nWrong input, please enter : \n", 0, 2);
    switch (choice)
    {
    case 1:
        hangmanAscii(0);
        errorCounter = 0;
        cout << "\n\n";
        //system("CLS");
        //cout << currentWord << endl;
        while (errorCounter < 7 && masterWord != currentWord)
        {
            temp1 = currentWord;
            cout << "enter your guess : ";
            cin >> guess;
            currentWord = guessCheck(masterWord, guess, currentWord);
            temp2 = currentWord;
            //cout << temp2 << endl
            // << endl;
            if (temp1.compare(temp2) == 0)
                errorCounter++;
            hangmanAscii(errorCounter);
        }

        break;

    default:
        break;
    }
}