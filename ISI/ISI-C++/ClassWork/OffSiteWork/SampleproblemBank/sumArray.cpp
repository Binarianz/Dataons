#include<iostream>
using namespace std;
int arraySum(int arr[],int count);

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},count;
    count=sizeof(arr);
    cout<<arraySum(arr,10)<<endl;
    system("pause");
}
int arraySum(int arr[],int count)
{
    int sum=0;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    return sum;
}