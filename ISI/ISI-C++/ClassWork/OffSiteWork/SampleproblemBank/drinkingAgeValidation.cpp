#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    age>18?cout<<"\nyou can drink\n":cout<<"\nyou can't drink\n";
    system("pause");
}