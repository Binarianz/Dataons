#include <iostream>
using namespace std;
int main()
{
    float numberOfFloors, totalHeight;
    cout << "\nEnter the number of floors : \n";
    cin >> numberOfFloors;
    totalHeight = (4 * (numberOfFloors - 1)) + 6;
    cout << "\nThe total the height of a building is = " << totalHeight << endl;
    system("pause");
    return 0;
}