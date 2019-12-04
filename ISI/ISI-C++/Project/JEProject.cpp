#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <algorithm>
using namespace std;
void hangmanAscii(int height);
string getMasterWord();
string guessCheck(string masterWord, string guessWord, string currrentWord);
int main()
{
    int choice;
    string masterWord;
    string guess;
    hangmanAscii(7);
    cout << "\n\n\n";
    masterWord = getMasterWord();
    string currentWord(masterWord.length(), '_');

    cout << masterWord << endl;
    cout << "1.Play\n2.Exit\n"
         << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        hangmanAscii(1);
        cout << "\n\n";
        cout << currentWord << endl;
        cout << "enter your guess : ";
        cin >> guess;
        cout << guessCheck(masterWord, guess, currentWord);
        break;

    default:
        break;
    }
    system("pause");
}

/*//////////////////////hangman printing function/////////////////////*/
void hangmanAscii(int height)
{
    string hangManAscii[19];
    hangManAscii[0] = "|         |\n";
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

    if (guessWord.length() == 1)
    {
        for (int i = 0; i < masterWord.size(); i++)
        {

            if (masterWord[i] == guessWord[0])
            {
                currrentWord[i] = guessWord[0];
            }
            else
            {
                if (currrentWord[i] == '_')
                {
                    currrentWord[i] = '_';
                }
            }
        }
    }
    else if (masterWord.compare(guessWord) == 0)
    {
        currrentWord = masterWord;
    }
    return currrentWord;
}
