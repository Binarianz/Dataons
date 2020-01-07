#include<iostream>
using namespace std;
int findIndex(int arr[],int count,int number);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},count,number;
    count=10;
    cout<<"\nEnter your number to search : ";
    cin>>number;
    cout<<"\nThe number found at : "<<findIndex(arr,count,number)<<endl;
    system("pause");
}
int findIndex(int arr[],int count,int number)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i]==number)
        {
            return i+1;
        }
        
    }
    return 0;
}