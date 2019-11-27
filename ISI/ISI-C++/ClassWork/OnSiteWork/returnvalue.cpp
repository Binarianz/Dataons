#include <iostream>
#include <string>
using namespace std;
struct person
{
    string firstname;
    string lastName;
};
void incrementer(int a);
void nameChanger(person myPerson[], int size);
int main()
{
    const int PERSON_ARRAY_SIZE = 2;
    person parr[PERSON_ARRAY_SIZE];
    nameChanger(parr, PERSON_ARRAY_SIZE);

    //cout << p.firstname
}
void nameChanger(person myPerson, int size)
{
    myPerson++;
    myPerson[0].firstname = "John";
    for (int i = 0; i < size; i++)
        myPerson.firstname = myPerson.lastName = "$";
}