#include"FlexibleCollection.h"
int main()
{
	FlexibleCollection f;
	cout<<f.getCapacity()<<endl;
	cout << f.getSize() << endl;
	f.add(1);
	cin.get();
	cout << f.getSize() << endl;
	f.add(2);
	f.add(3);
	f.add(4);
	f.add(5);
	f.add(6);
	f.add(7); 
	f.add(8);
	cin.get();
	cout << f.getSize() << endl;
//	f.remove(3);
	cin.get();
	cout << f.getSize() << endl;
	cin.get();
	//int** k = f.getElement();
	for (int i = 0; i < f.getSize(); i++)
	{
		cout << *(f.getElement(i))<<endl;
	}
}