#include<iostream>
#include<string>
#include"City.h"
using namespace std;

int main() {
	cout << "Individual testing begins ====>"<<endl;
	
	City m = City("Montreal");

	m.display();

	cin.get();
	return 1;
}