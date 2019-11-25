#include<iostream>
using namespace std;
int main()
{
    int a[6],i,j,temp=0;
    cout<<"Enter 6 numbers";
    for ( i = 0; i < 6; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < 6; i++)
    {
       for (j = 0; j < 6; j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
    }
    cout<<"\n\n\n\n";
    for ( i = 0; i < 6; i++)
    {
        cout<<a[i]<<"\n";
    }
    
    
}