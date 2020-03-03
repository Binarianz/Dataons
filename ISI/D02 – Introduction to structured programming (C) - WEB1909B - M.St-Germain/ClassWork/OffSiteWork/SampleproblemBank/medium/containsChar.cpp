#include<iostream>
#include<string>
using namespace std;
bool containsChar(string s,char c);
int main()
{
    string searchString="";
    char searchelemrnt;
    cout<<"\nEnter the string to be searched into : ";
    getline(cin,searchString);
    cout<<"\nEnter the element to be searched : ";
    cin>>searchelemrnt;
    if(containsChar(searchString,searchelemrnt)==true)
        cout<<"\nElement is present in the string";
    else
    {
        cout<<"\nElement does not present in the string";
    }
    

}
bool containsChar(string s,char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==c)
        {
            return true;
        }
        
    }
    return false;
}