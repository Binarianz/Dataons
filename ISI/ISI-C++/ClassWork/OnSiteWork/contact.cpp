#include <iostream>
#include <string>
using namespace std;
int getValidInput(string msg, string emsg, int min, int max);
struct contact
{
    string name;
    long long phoneNumber;
};
int main()
{
    contact con[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << "th name : ";
        cin >> con[i].name;
        cout << "\nEnter the " << i + 1 << "th number : ";
        cin >> con[i].phoneNumber;
    }
    //cout << "Name"         << "======"         << "Number\n";
    for (int i = 0; i < 5; i++)
    {
        cout << con[i].name << "======" << con[i].phoneNumber << endl;
    }
}

int getValidInput(string msg, string emsg, int min, int max)
{
    int toReturn;
    cout << msg;
    cin >> toReturn;
    while (cin.fail() || cin.peek() != '\n' || toReturn <= min || toReturn >= max)
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << emsg;
        cin >> toReturn;
    }
    cin.ignore(512, '\n');
    return toReturn;
}