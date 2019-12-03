#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;
int validationInput(int);
void printUnderScore(int);
string getMasterWord();
void stringComp(string);
int main()
{
    cout << getMasterWord();
    system("pause");
}
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