#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double x1, x2, x3, x4, x5, x6, x7;
    cout << "calculo para un credito bancario de consumo" << endl;
    cout << "ingrese el monto del capital (__Bs.): ";
    cin >> x1;
    cout << "ingrese la tasa de interes mensual (en __%): ";
    cin >> x2;
    cout << "y el numero de cuotas a pagar: ";
    cin >> x3;
    x4 = x2 / 100;
    x5 = x1 * (x4* pow((1+x4), x3)) / (pow(1+x4, x3)-1);
    x6 = x3 * x5;
    x7 = x6 - x1;
    cout << "cuota mensual: " << x5 << "Bs." << endl << "Monto total a pagar: " << x6 << "Bs." << endl << "interes total: " << x7 << "Bs." << endl;
    return 0;
}