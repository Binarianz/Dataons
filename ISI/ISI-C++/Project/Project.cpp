#include <iostream>
#include<fstream>
#include<string>
#include<time.h>
using namespace std;
string line;

int validationInput(int);
void printUnderScore(int);
int lineLength();
void stringComp(string);
int main() 
{
	int guess=7;
	printUnderScore(lineLength());
	while (guess != 0)
	{
		stringComp(line);
	}
	system("pause");
	
	return 0;
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

void printUnderScore(int number)
{
	for (int i = 0; i < number; i++)
	{
		cout << " _ ";
	}
	cout << endl;
}
int lineLength()
{
	//string line;
	int randomNumber, rLine = 0, stringLength = 0;
	srand(time(NULL));
	randomNumber = rand() % 20;
	ifstream myfile("words.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			++rLine;
			if (randomNumber == rLine) {
				return line.size();
			}
		}
		myfile.close();

	}

	else cout << "Unable to open file";
}
void stringComp(string a)
{
	int i,j=0;
	int length = a.size();
	char guess;
	char* p=new char[length] ;
	
	cout << "\n Enter your Guess ; ";
	cin >> guess;
	guess = validationInput(guess);
	for ( i = 0; i < length; i++)
	{
		if (line[i]==guess)
		{
			p[i] = a[i];
			j++;
		}
		else
		{
			p[i] = '_';
			j++;
		}
		cout << p;
	}
	delete[] p;
}