#include <iostream>
using namespace std;
int main()
{
    float temperatureInDegreesFahrenheit, temperatureInDegreesCelsius;
    cout << "Enter a temperature in degrees Fahrenheit.\n";
    cin >> temperatureInDegreesFahrenheit;
    temperatureInDegreesCelsius = ((temperatureInDegreesFahrenheit - 32) / 9) * 5;
    cout << "Converted it into degrees Celsius is = " << temperatureInDegreesCelsius << endl;
    system("pause");

    return 0;
}