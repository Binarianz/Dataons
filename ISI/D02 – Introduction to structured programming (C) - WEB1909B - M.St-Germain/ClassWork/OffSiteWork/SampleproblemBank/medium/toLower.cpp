#include<iostream>
#include<string>
using namespace std;
string toLower(string a);
int main()
{
    string inputString="";
    cout<<"\nEnter the string to process: ";
    getline(cin,inputString);
    cout<<"\nThe string after process is: "<<toLower(inputString);

}
string toLower(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if((int)a[i]==32)
            a[i]=a[i];
        else
        {
            a[i]=(char)((int)a[i]+32);
        }
        
    }
    return a;
}