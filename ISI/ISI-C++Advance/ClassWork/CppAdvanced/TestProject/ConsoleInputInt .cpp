#include <iostream>
#include <string>
using namespace std;

int readInt();
int readInt(int min, int max);
int readInt(string message);
int readInt(string message, int min, int max);

void readThreeInts(int* a,int*b,int*c);void swapInts(int *x, int *y);void sortThreeInts(int* a, int*b, int*c);void displayThreeInts(int* a, int*b, int*c);

int main()
{
	int number1, number2, number3;
	readThreeInts(&number1, &number2, &number3);
	displayThreeInts(&number1, &number2, &number3);
	sortThreeInts(&number1, &number2, &number3);
	displayThreeInts(&number1, &number2, &number3);
	cout << "fdfdfd";
	cin >> number1;
}




int readInt()
{
	int cinInt;
	cin >> cinInt;
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "    Error: Invalid integer format" << endl;
		cin >> cinInt;
	}
	return cinInt;
}

int readInt(int min, int max)
{
	int cinInt = readInt();
	while (cinInt < min || cinInt > max)
	{
		cout << "    Error: Out of bounds. " << cinInt << " is not between " << min << " and " << max << endl;
		cinInt = readInt();
	}
	return cinInt;
}

int readInt(string message, int min, int max)
{
	cout << message << endl;
	return readInt(min, max);
}



int readInt(string message)
{
	cout << message << endl;
	return readInt();
}
void readThreeInts(int * a, int * b, int * c)
{
	*a = readInt("Enter the number 1 between 0 and 100 : ", 0, 100);
	*b=readInt("Enter the number 2 between 0 and 100: ", 0, 100);
	*c= readInt("Enter the number 1 between 0 and 100: ", 0, 100);
}
void swapInts(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void sortThreeInts(int* a, int* b, int* c)
{
	int* arr[3];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	for (int i = 0; i < sizeof(arr); i++)
	{
		for (int i = 0; i < sizeof(arr); i++)
		{
			if (*arr[i] < *arr[i + 1])
				swapInts(arr[i], arr[i + 1]);
		}
	}
}


void displayThreeInts(int* a, int*b, int*c)
{
	cout <<"A = "<< *a << endl;
	cout << "B = " << *b << endl;
	cout << "C = " << *c << endl;
}