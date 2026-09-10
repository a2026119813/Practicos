#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double k1, k2;
    cout << "calcular el precio de los kwh de su hogar para su tarifa" << endl;
    cout << "ingrese su consumo kwh: ";
    cin >> k1;
    if (k1 == 0)
    {
        k1 = 8;
        cout << "sin consumo reguistrado, cargo de servicio: " << k1 << endl;
    }
    else if (k1 > 0 && k1 <= 100)
    {
        k2 = (k1 * 0.3) + 8;
        cout << "su tarifa es de: " << k2 << endl;
    }
    else if (k1 > 100 && k1 <= 300)
    {
        k2 = (k1 * 0.5) + 8;
        cout << "su tarifa es de: " << k2 << endl;
    }
    else if (k1 > 300 && k1 <= 600)
    {
        k2 = (k1 * 0.75) + 8;
        cout << "su tarifa es de: " << k2 << endl;
    }
    else
    {
        k2 = (k1 * 1.1) + 8;
        cout << "su tarifa es de: " << k2 << endl;
    }
    return 0;
}