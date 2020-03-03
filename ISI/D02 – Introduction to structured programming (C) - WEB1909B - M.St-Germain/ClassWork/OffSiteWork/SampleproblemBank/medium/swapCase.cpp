#include<iostream>
#include<string>
using namespace std;
string swapCase(string a);
int main()
{
    string inputString="";
    cout<<"\nEnter the string tobe processed: ";
    getline(cin,inputString);
    cout<<"\nThe string after the process: "<<swapCase(inputString);

}
string swapCase(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if((int)a[i]!=32)
        {
            
        if ((int)a[i]>=65&&(int)a[i]<=90)
        {
            a[i]=(char)((int)a[i]+32);
        }
        else if ((int)a[i]>=97&&(int)a[i]<=122)
        {
            a[i]=(char)((int)a[i]-32);
        }        
        }
    }
    return a;
}