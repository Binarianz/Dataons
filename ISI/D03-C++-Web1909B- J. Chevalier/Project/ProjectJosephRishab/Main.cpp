#include<iostream>
#include<string>
#include"City.h"
#include"UnruledNotebook.h"
using namespace std;

int main() {
	cout << "Individual testing begins ====>"<<endl;
	
	City m ;
	
	Product* p = new Product("Making your bed", 22.2, 20.2);
	//Book bb;
	UnruledNotebook b = UnruledNotebook("Making your bed", 22.2, 20.2, "John Maclarin", 2014, 200);
	UnruledNotebook d;
	Product* book = new Book("Making your bed 1", 22.2, 20.2, "John Maclarin", 2014, 200);
	m.addCityInvetoryItem(new Book("Making your bed 0", 22.2, 20.2, "John Maclarin", 2014, 200));
	m.addCityInvetoryItem(book);
	m.addCityInvetoryItem(new Book("Making your bed 2", 22.2, 20.2, "John Maclarin", 2014, 200));
	m.addCityInvetoryItem(new Book("Making your bed 3", 22.2, 20.2, "John Maclarin", 2014, 200));
	//m.addCityInvetoryItem(p);
	cin.get();
	//m.removeCityInvetoryItem();
	//b.display();
	////m.display();
	//p.display();
	
	cin.get();
	return 1;
}