#include<iostream>
using namespace std;
int main()
{
    int a[6],i,j,temp=0,avg=0;
    cout<<"Enter 6 grades";
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
    for ( i = 1; i < 5; i++)
    {
       avg += a[i];
    }
    
    cout<<"The average is : "<<avg/4;
    
}