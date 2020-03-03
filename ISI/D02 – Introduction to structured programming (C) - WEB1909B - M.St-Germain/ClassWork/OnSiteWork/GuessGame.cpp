#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int getValidInput(string, string, int, int);
int main()
{
	srand(time(NULL));
	int min=0, max=0, guess, numToGuess;
	min = getValidInput("Enter the minimum value : ", "Invalid minimum value ", 0, 9999);
	max = getValidInput("Enter the maximum value : ", "Invalid maximum value ", min, 9999);
	numToGuess = (rand() % (max - min) + min);
	for (int i = 10; i > 0; i--)
	{
		cout << "\nYou have "<<i<<" chances  : ";

		guess = getValidInput("Enter the  value : ", "Invalid  value \n", min, max);
		if (numToGuess == guess)
		{
			cout << "\nYou won";
			break;
		}
		else if (numToGuess < guess)
		{
			cout << "\nLower value\n";
		}
		else
		{
			cout << "\nHigher value\n";
		}
	}
}
int getValidInput(string msg, string emsg, int min, int max)
{
	int toReturn;
	cout << msg;
	cin >> toReturn;
	while (cin.fail() || cin.peek() != '\n' || toReturn < min || toReturn > max)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << emsg<<msg;
		cin >> toReturn;
	}
	cin.ignore(512, '\n');
	return toReturn;
}