#include<iostream>
#include<string>
using namespace std;
const int  iterations = 5;

//funtions
char readChar();
string readWord();
string readLine();
int readInt();
double readDouble();//functions with string passingchar readChar(string message);
string readWord(string message);
string readLine(string message);
int readInt(string message);
double readDouble(string message);

// functions with void
void testReadChar();
void testReadWord();
void testReadLine();
void testReadInt();void testReadDouble();

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
double readDouble(){
	char inputDouble;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Warning - please enter a valid value !: ";
		cin >> inputDouble;
	}
	return inputDouble;}char readChar(string message){	
	cout << message << endl;	return readChar();}string readWord(string message){
	cout << message << endl;	return readWord();}string readLine(string message){
	cout << message << endl;	return readLine();}int readInt(string message){	cout << message << endl;	return readInt();}double readDouble(string message){
	cout << message << endl;	return readDouble();}void testReadChar(){
	cout << "=================A test case for ReadChar() ==============="<<endl;	char arrOfChars[iterations];	for (int i = 0; i < iterations; i++)
	{
		arrOfChars[i] = readChar("Enter the char : ");
		cout << endl;
		//readChar();
	}	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfChars[i] << endl;
	}}void testReadWord(){
	cout << "=================A test case for ReadWord()===============" << endl;	string arrOfString[iterations];	for (int i = 0; i < iterations; i++)
	{
		arrOfString[i] = readWord("Enter the word : ");
		cout << endl;
	}	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfString[i] << endl;
	}}void testReadLine(){
	cout << "=================A test case for ReadLine()===============" << endl;	string arrOfLine[iterations];	for (int i = 0; i < iterations; i++)
	{
		arrOfLine[i] = readLine("Enter the line : ");
		cout << endl;
	}	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfLine[i] << endl;
	}}void testReadInt(){
	cout << "=================A test case for ReadInt()===============" << endl;	int arrOfInts[iterations];	for (int i = 0; i < iterations; i++)
	{
		arrOfInts[i] = readInt("Enter the int : ");
		cout << endl;
	}	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfInts[i] << endl;
	}}void testReadDouble(){
	cout << "=================A test case for ReadDouble()===============" << endl;	double arrOfDouble[iterations];	for (int i = 0; i < iterations; i++)
	{
		arrOfDouble[i] = readDouble("Enter the double : ");
		cout << endl;
	}	for (int i = 0; i < iterations; i++)
	{
		cout << arrOfDouble[i] << endl;
	}}char readChar(char options[], int optionsCount){
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
	}	cout << "error";	readChar();}