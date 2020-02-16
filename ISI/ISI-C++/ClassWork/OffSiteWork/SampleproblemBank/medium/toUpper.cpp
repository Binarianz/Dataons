#include<iostream>
#include<string>
using namespace std;
string toUpper(string a);
int main()
{
	string beforeProcess = "", afterProcess = "";
	cout << "\nEnter a string to be converted : ";
	getline(cin, beforeProcess);
	//toUpper(beforeProcess);
	cout << "\nString after process is : " << toUpper(beforeProcess);

}
string toUpper(string a)
{
	for (int i = 0; i < a.length(); i++)
	{
		if ((int)a[i] == 32)
			a[i] = ' ';
		else
			a[i] = (char)(((int)a[i]) - 32);
	}
	return a;
}