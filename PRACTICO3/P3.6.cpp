#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double t1, t2, t3, t4;

    cout << "programa de conversion de temperatura de celsius a Fahrenheit, Kelvin y Rankine" << endl;
    cout << "introduzca los grados celcius (__°C): ";
    cin >> t1;
    t2 = (t1/(9/5)) + 32;
    t3 = (t1 + 273.15);
    t4 = (t1 + 273.15)*(9/5);
    cout << "si " << t1 << "°C, entonces en Fahrenheit es: " << t2 << "°F" << endl;
    cout << "si " << t1 << "°C, entonces en Kelvin es: " << t3 << "°K" << endl;
    cout << "si " << t1 << "°C, entonces en Rankine es: " << t4 << "°R" << endl;

    return 0;
}