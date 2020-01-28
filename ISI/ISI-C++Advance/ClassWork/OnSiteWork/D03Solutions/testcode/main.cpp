#include <iostream> 
#include<string>
#include"BaseClass.h"
#include "ChildClass.h"
using namespace std;

int main()
{
	int k;
	cout << "enter array size:";
	cin >> k;
	BaseClass* b = new BaseClass[k];
	ChildClass c;
	c = { 2,"kola",3,4 };
	cout << "the child has :" << c->getidNo ()<< endl << c.getname ()<< endl << c.getsize() << endl << c.getsteps ()<< endl;
	cin.get();
	for (int i = 0; i < k; i++)
	{
		b[i].setidNo(2);
		b[i].setname("john");
	}
	cout << "data enterd is : " << endl;
	for (int i = 0; i < k; i++)
	{
		cout << b[i].getidNo() << " : " << b[i].getname() << endl;
	}
}



























//int main()
//{
//    int a;
//    cout << "\nEnter the size of the array" << endl;
//    cin >> a;
//    int* array1 = new int[a];
//    for (int i = 0; i < a; i++)
//    {
//        array1[i] = i;
//    }
//
//    cout << "\nThe initial array is :\n";
//    for (int i = 0; i < a; i++)
//    {
//        cout << array1[i]<<endl;
//    }
//}
//void RandArray(int* vector, int length)
//
//{
//
//    for (int i = 0; i < length; i++)
//    {
//        vector[i] = (rand() % 10) + 1;
//    }
//}
//
//int main()
//
//{
//
//    int length;
//    cin >> length;
//    int* vector = new int[length]();
//
//    RandArray(vector, length);
//
//    for (int i = 0; i < length; i++)
//
//    {
//
//        cout << vector[i] << endl;
//
//    }
//    delete[] vector;
//    return 0;
//
//}
