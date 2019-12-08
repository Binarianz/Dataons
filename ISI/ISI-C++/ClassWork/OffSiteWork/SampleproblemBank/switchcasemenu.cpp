#include<iostream>
using namespace std;
int main()
{
    int n;
    
    while(n!=0)
    {
        cout<<"\nEnter your choice : ";
    cin>>n;
switch (n)
    {
    case 1:
        cout<<"\nYou chose option 1";
        break;
    case 2:
        cout<<"\nYou chose option 2 ";
        break;
    case 3:
        cout<<"\nYou chose option 3 ";
        break;
    case 4:
        cout<<"\nYou chose option 4 ";
        break;
    case 5:
        cout<<"\nYou chose option 5 ";
        break;
    default:
        cout<<"\nWrong choice";
        break;
    }
    }
    
}