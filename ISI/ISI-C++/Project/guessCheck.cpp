
#include <iostream>
#include <string>
using namespace std;
string guessCheck(string masterWord, string guessWord, string currrentWord);
string currrentWord, masterWord;
int main()
{
    currrentWord = "___+___";
    currrentWord = guessCheck("boolean", "o", currrentWord);
    cout << guessCheck("boolean", "b", currrentWord) << endl;
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
                currrentWord[i] = guessWord[0];
            }
            else
            {
                if (currrentWord[i] == '_')
                {
                    currrentWord[i] = '_';
                }
            }
        }
    }
    else if (masterWord.compare(guessWord) == 0)
    {
        currrentWord = masterWord;
    }
    return currrentWord;
}