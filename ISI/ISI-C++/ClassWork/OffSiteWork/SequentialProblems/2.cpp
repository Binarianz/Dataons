#include <iostream>
using namespace std;
int main()
{
    int quantity;
    float gst = .07, qst = .075;
    float unitPrice = 0, amountgst = 0, amountqst = 0, totalprice = 0;
    cout << "Enter unit price and quantity"<<endl;
    cin >> unitPrice >> quantity;
    amountgst = (unitPrice * quantity) * gst;
    amountqst = (amountgst + (unitPrice * quantity)) * qst;
    totalprice = (amountgst) + amountqst + (unitPrice * quantity);
    cout << "total gst to be paid = " << amountgst << endl;
    cout << "total qst to be paid = " << amountqst << endl;
    cout << "total amount to be paid = " << totalprice << endl;
    system("pause");

    return 0;
}