#include<iostream>
#include<string>
using namespace std;
const int  iterations = 5;

//funtions
char readChar();
string readWord();
string readLine();
int readInt();
double readDouble();
string readWord(string message);
string readLine(string message);
int readInt(string message);
double readDouble(string message);

// functions with void
void testReadChar();
void testReadWord();
void testReadLine();
void testReadInt();

//functions with two arguments
char readChar(char options[], int optionsCount);


int main()
{
	
	
	
	//testReadChar();
	//testReadWord();
	//testReadLine();
	//testReadInt();
	//testReadDouble();
	cout << "wnwkjdjkw";
	return 0;


}
char readChar()
{
	char inputChar;
	cin >> inputChar;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return inputChar;	
}
string readWord()
{
	string inputString;
	cin >> inputString;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return inputString;
}
string readLine()
{
	string inputLine;
	getline(cin, inputLine);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return inputLine;
}
int readInt()
{
	int inputInt;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Warning - please enter a valid value !: ";
		cin >> inputInt;
	}
	return inputInt;
}
double readDouble()
	char inputDouble;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Warning - please enter a valid value !: ";
		cin >> inputDouble;
	}
	return inputDouble;
	cout << message << endl;
	cout << message << endl;
	cout << message << endl;
	cout << message << endl;
	cout << "=================A test case for ReadChar() ==============="<<endl;
	{
		arrOfChars[i] = readChar("Enter the char : ");
		cout << endl;
		//readChar();
	}
	{
		cout << arrOfChars[i] << endl;
	}
	cout << "=================A test case for ReadWord()===============" << endl;
	{
		arrOfString[i] = readWord("Enter the word : ");
		cout << endl;
	}
	{
		cout << arrOfString[i] << endl;
	}
	cout << "=================A test case for ReadLine()===============" << endl;
	{
		arrOfLine[i] = readLine("Enter the line : ");
		cout << endl;
	}
	{
		cout << arrOfLine[i] << endl;
	}
	cout << "=================A test case for ReadInt()===============" << endl;
	{
		arrOfInts[i] = readInt("Enter the int : ");
		cout << endl;
	}
	{
		cout << arrOfInts[i] << endl;
	}
	cout << "=================A test case for ReadDouble()===============" << endl;
	{
		arrOfDouble[i] = readDouble("Enter the double : ");
		cout << endl;
	}
	{
		cout << arrOfDouble[i] << endl;
	}
	char temp = readChar();
	while (temp != "")
	{

	}
	for (int i = 0; i < sizeof(options); i++)
	{
		if (temp == options[i])
		{
			return temp;
		}
	}