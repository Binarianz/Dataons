#include<iostream>
using namespace std;
int sort1(int n[6]);
int main()
{
 int i,s[6];
 cout<<"Enter the value of six judgements\n";
 for ( i = 0; i < 6; i++)
 {
    cin>>s[i];
 }
 cout<<"\nThe average of judgements are : "<<sort1(s);
}
int sort1(int n[6])
{
    int i,temp,j,avg;
    for(i=0;i<6;i++)
    {
        for (j = 0; i < 6; j++)
        {
           if(n[j]>n[j+1])
           {
               temp=n[j];
               n[j]=n[j+1];
               n[j+1]=temp;
           }
        }        
    }
    for ( i = 1; i < 5; i++)
    {
        avg+=n[i];
    }
    return (avg/4);
    

}