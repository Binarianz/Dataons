#include <iostream>
#include<fstream>
#include<string>
#include<time.h>
using namespace std;
int main()
{
    int i,j,k,m=0;
    bool flag;
    char ch;
    j=7;
    string guesssWord = "alexander";
    string flase ="";
    cout<<"\nEnter your guess : ";
    cin>>ch;
    while (j!=0 )
    {
           for ( i = 0; i < guesssWord.size(); i++)
    {
        
       if(guesssWord[i]==ch)
       {
           flase += ch;
           flag=true;
           cout<<ch;
           j--;
       }
       else
       {
           flag=false;
           cout<<"_ ";
           j--;
       }
       
    }
    cout<<"\nyou have "<<j<<" guesses\n";
    }
    

    
    // while (j>=0)
    // {        
    //     for ( i = 0; i < 7; i++)
    //     {
    //         cout<<"\nYou have "<<j<<"chances, ";
    //         cout<<"Enter your character : ";
    //         cin>>ch;
    //         if (guesssWord[i] == ch)
    //         {
    //             cout<<"\nyou guessed "<<m<<" letter correct";
    //             m++;
    //         }
    //         else
    //         {
    //             j++;
    //         }
            
    //     }
        
        
        
        
    // }
    
    system("pause");
}