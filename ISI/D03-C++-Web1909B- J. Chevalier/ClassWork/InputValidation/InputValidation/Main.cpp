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

//functions with string passing
char readChar(string message);
string readWord(string message);
string readLine(string message);
int readInt(string message);
double readDouble(string message);

// functions with void
void testReadChar();
void testReadWord();
void testReadLine();
void testReadInt();
void testReadDouble();

//functions with two arguments
char readChar(char options[5], int optionsCount);
int readInt(int min, int max);
double readDouble(double min, double max);char readChar(string message, char options[], int optionsCount);int readInt(string message, int min, int max);double readDouble(string message, double min, double max);

//void test functions
void testReadChar(char options[], int optionsCount);
void testReadInt(int min, int max);
void testReadDouble(double min, double max);

int main()
{
	
	
	char option[5] = { 'a','b','c','d','f' };
	//char bp;
	for (int i = 0; i < 5; i++)
	{
		cout << option[i] << endl;
	}

	//testReadChar(option, 5);
	testReadInt(20, 100);
	//testReadDouble(20.5, 100.2);
	//cout << "the returned value is : "<<bp << endl;
	//double j = readDouble(20.5, 100.2);
	//cout << "the returned value is : " << j << endl;
	system("pause");
	//cin.get();

}
char readChar()
{
	char inputChar;
	cin.clear();
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
	int inputInt=0;
	cin >> inputInt;
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
{
	double inputDouble;
	cin >> inputDouble;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Warning - please enter a valid value !: ";
		cin >> inputDouble;
	}
	return inputDouble;
}
char readChar(string message)
{	
	cout << message << endl;
	return readChar();
}
string readWord(string message)
{
	cout << message << endl;
	return readWord();
}
string readLine(string message)
{
	cout << message << endl;
	return readLine();
}
int readInt(string message)
{
	cout << message << endl;
	return readInt();
}
double readDouble(string message)
{
	cout << message << endl;
	return readDouble();
}
void testReadChar()
{
	cout << "=================A test case for ReadChar() ==============="<<endl;
	char arrOfChars[iterations];
	for (int i = 0; i < iterations; i++)
	{
		arrOfChars[i] = readChar("Enter the char : ");
		cout << endl;
		//readChar();
	}
	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfChars[i] << endl;
	}
}
void testReadWord()
{
	cout << "=================A test case for ReadWord()===============" << endl;
	string arrOfString[iterations];
	for (int i = 0; i < iterations; i++)
	{
		arrOfString[i] = readWord("Enter the word : ");
		cout << endl;
	}
	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfString[i] << endl;
	}
}
void testReadLine()
{
	cout << "=================A test case for ReadLine()===============" << endl;
	string arrOfLine[iterations];
	for (int i = 0; i < iterations; i++)
	{
		arrOfLine[i] = readLine("Enter the line : ");
		cout << endl;
	}
	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfLine[i] << endl;
	}
}
void testReadInt()
{
	cout << "=================A test case for ReadInt()===============" << endl;
	int arrOfInts[iterations];
	for (int i = 0; i < iterations; i++)
	{
		arrOfInts[i] = readInt("Enter the int : ");
		cout << endl;
	}
	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfInts[i] << endl;
	}
}
void testReadDouble()
{
	cout << "=================A test case for ReadDouble()===============" << endl;
	double arrOfDouble[iterations];
	for (int i = 0; i < iterations; i++)
	{
		arrOfDouble[i] = readDouble("Enter the double : ");
		cout << endl;
	}
	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfDouble[i] << endl;
	}
}
char readChar(char options[5], int optionsCount)
{
	char temp = readChar();
	while (sizeof(temp)==1) 
	{
		for (int i = 0; i < sizeof(options); i++)
		{
			if (temp == options[i])
			{
				return temp;
			}
		}
		cout << "error,Please reenter the value : ";
		temp=readChar();
	}
	
}
int readInt(int min, int max)
{
	int temp = readInt();
	while (temp !=NULL)
	{
		if (temp >= min && temp <= max)
		{
			return temp;
		}
		cout << "error,Please reenter the int value : ";
		temp = readInt();
	}

}
double readDouble(double min, double max){
	double temp = readDouble();
	while (temp != NULL)
	{
		if (temp >= min && temp <= max)
		{
			return temp;
		}
		cout << "error,Please reenter the int value : ";
		temp = readDouble();
	}}char readChar(string message, char options[], int optionsCount){
	cout << message;	return readChar(options, sizeof(options));}int readInt(string message, int min, int max){
	cout << message;	return readInt(min, max);}double readDouble(string message, double min, double max){
	cout << message;	return readDouble(min, max);}void testReadChar(char options[], int optionsCount){
	cout<<readChar("Enter the value : ",options, optionsCount);}void testReadInt(int min, int max)
{
	int k=readInt("Enter the value : ", min, max);
	cout << endl << k;
}
void testReadDouble(double min, double max)
{
	cout<<readDouble("Enter the value : ", min, max);
}