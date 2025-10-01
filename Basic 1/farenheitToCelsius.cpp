#include <iostream>
using namespace std;

int main() {

    double fahrenheit, celsius;

    cout << "Introduce la temperatura en grados farenheit: ";

    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << " grados fahrenheit equivalen a " << celsius << " grados celsius. " << endl;

    const int y {};

    cout <<y<< endl;

    return 0;
 }