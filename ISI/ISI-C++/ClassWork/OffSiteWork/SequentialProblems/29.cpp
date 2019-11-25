#include<iostream>
using namespace std;
int main()
{
    int d1[3],d2[3];
    cout<<"\nPlease enter the first day/month/year : ";
    cin>>d1[0]>>d1[1]>>d1[2];
    cout<<"\nPlease enter the second day/month/year : ";
    cin>>d2[0]>>d2[1]>>d2[2];
    if(d1[2]<d2[2])
    {
        cout<<"first entered date comes first\n";
        return 0;
    }
    if (d1[2]<d2[2])
    {
        cout<<"second entered date comes first\n";
        return 0;
    }
    if(d1[1]<d2[1])
    {
        cout<<"first entered date comes first\n";
        return 0;
    } 
    if (d1[1]>d2[1])
    {
        cout<<"second entered date comes first\n";
        return 0;
    }
    else
    {
        /* code */
    }
    
    
    
    

}