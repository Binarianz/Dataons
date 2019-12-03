#include <iostream>
#include <string>
using namespace std;
string guessCheck(string masterWord, string guessWord, string currrentWord);
string currrentWord, masterWord;
int main()
{
    cout << guessCheck("boolean", "o", "") << endl;
    system("pause");
}
string guessCheck(string masterWord, string guessWord, string currrentWord)
{
    if (guessWord.length() == 1)
    {
        for (int i = 0; i < masterWord.size(); i++)
        {

            if (masterWord[i] == guessWord[0])
            {
                currrentWord += guessWord;
                //flag = true;
                cout << guessWord;
                //j--;
            }
            else
            {
                //flag = false;
                currrentWord += "_ ";
            }
        }
    }
    else if (masterWord.compare(guessWord) == 0)
    {
        currrentWord = masterWord;
    }
    return currrentWord;
}