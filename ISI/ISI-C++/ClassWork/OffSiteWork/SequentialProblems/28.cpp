#include<iostream>
using namespace std;
char StudentGrade(int);
int main()
{
    int grade;
    cout<<"\nPlease Enter your grade : ";
    cin>>grade;
    cout<<"\nThe grade for the given student is : "<<StudentGrade(grade);
}
char StudentGrade(int grade)
{
    char gr;
    if(grade>=90 && grade<=100)
    {
        gr='A';
    }
    else if(grade>=80 && grade<=90)
    {
        gr='B';
    }
    else if(grade>=70 && grade<=80)
    {
        gr='C';
    }
    else if(grade>=60 && grade<=70)
    {
        gr='D';
    }
    else
    {
        gr='F';
    }
    return gr;

}