#include<iostream>
#include<string>
using namespace std;
bool containsUpperChar(string a);
int main()
{
    string searchString="";
    //char searchelement;
    cout<<"\nEnter the string to be searched into : ";
    getline(cin,searchString);
    if(containsUpperChar(searchString)==true)
        cout<<"\nThe string contains upper case \n";
    else
        cout<<"\nDoes not contain upper case";
    
}
bool containsUpperChar(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if((int)a[i]>=65&&(int)a[i]<=90)
            return true;
        
    }
    return false;
    

}