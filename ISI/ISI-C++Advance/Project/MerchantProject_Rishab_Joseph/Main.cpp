#include<iostream>
#include<string>
#include"TravellingMerchant.h"
using namespace std;

int main() {
	Merchant merchant(1000, "Rishab", "Joseph");
	
	TravellingMerchant merchants(&merchant);

	merchants.startGame();

	cin.get();
	return 1;
}