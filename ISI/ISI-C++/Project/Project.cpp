#include <iostream>
#include<fstream>
#include<string>
#include<time.h>

using namespace std;
int main() 
{
	string line;
	int randomNumber, rLine = 0,stringLength;
	srand(time(NULL));
	randomNumber = rand() % 20;
	ifstream myfile("words.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			++rLine;
			if(randomNumber==rLine){
				cout << line << '\n';
			stringLength = line.size();
			cout << stringLength << '\n';
			}
		}
		myfile.close();
	}

	else cout << "Unable to open file";
	system("pause");
	return 0;
}