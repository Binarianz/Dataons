#include <iostream>
using namespace std;
int main()
{
    float temperatureInDegreesFahrenheit, temperatureInDegreesCelsius;
    cout << "\nEnter a temperature in degrees Fahrenheit : ";
    cin >> temperatureInDegreesFahrenheit;
    temperatureInDegreesCelsius = ((temperatureInDegreesFahrenheit - 32) / 9) * 5;
    cout << "\nConverted it into degrees Celsius is = " << temperatureInDegreesCelsius << endl;
    system("pause");
    return 0;
}