#include<iostream>
using namespace std;
int getHighest(int a,int b);
int main()
{
    int a,b;
    cout<<"\nEnter two numbers : ";
    cin>>a>>b;
    cout<<"\nThe larger number is : "<<getHighest(a,b)<<endl;

}
int getHighest(int a,int b)
{
    if(a>b)
    return a;
    else
    {
       return b;
    }
    
}