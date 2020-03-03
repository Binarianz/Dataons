#include <iostream>
using namespace std;
int main()
{
    float length, height, width, volume;
    cout << "\nEnter length,height and width.\n";
    cin >> length >> height >> width;
    volume = length * height * width;
    cout << "\nThe volume of a rectangular prism is = " << volume << endl;
    system("pause");
    return 0;
}