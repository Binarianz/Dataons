#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <algorithm>
using namespace std;
string erroeword;
void hangmanAscii(int height);
string getMasterWord();
string guessCheck(string masterWord, string guessWord, string currrentWord);
int countError(int chances);
int main()
{
	int choice, errorCounter;
	string temp1, temp2;
	string masterWord;
	string guess;
	bool fail = false;
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
		hangmanAscii(0);
		errorCounter = 0;
		cout << "\n\n";
		cout << currentWord << endl;

		while (errorCounter < 7 && masterWord != currentWord)
		{
			temp1 = currentWord;
			cout << "enter your guess : ";
			cin >> guess;
			currentWord = guessCheck(masterWord, guess, currentWord);
			temp2 = currentWord;
			cout << temp2 << endl
				<< endl;
			if (temp1.compare(temp2) == 0)
				errorCounter++;

			hangmanAscii(errorCounter);
		}

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
	cout <<endl<< "Error word is : " << erroeword << endl;
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
	bool flag;

	if (guessWord.length() == 1)
	{
		for (int i = 0; i < masterWord.size(); i++)
		{

			if (masterWord[i] == guessWord[0])
			{
				currrentWord[i] = guessWord[0];
				flag=true;
			}
			else
			{				
				if (currrentWord[i] == '_')
				{
					currrentWord[i] = '_';
				}
			}
		}
		if(flag==false)
		   erroeword+=guessWord[0]+" ";

	}
	else if (masterWord.compare(guessWord) == 0)
	{
		currrentWord = masterWord;
	}
	else
	{
	erroeword += guessWord +" ";
	}
	
	return currrentWord;
	
}

/*////////////////////////////////error counting function////////////////////////*/

int countError(int chances)
{
	int i, j;
	return 0;
}