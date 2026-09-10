#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     double x1, x2, x3, x4, x5, x6, x7;
    cout << "calculo para un credito bancario de consumo" << endl;
    cout << "ingrese el monto del capital (__Bs.): ";
    cin >> x1;
    cout << "ingrese la tasa de interes anual (en __%): ";
    cin >> x2;
    cout << "y el numero de plazo en años: ";
    cin >> x3;
    x4 = x2 / 12 / 100;
    x5 = x1 * (x1 * (pow((1+x4), (x3*12))));
    x6 = x5 - x1;
    cout << "Monto de ganancia neta: " << x6 << "Bs." << endl << "Monto total acumulado: " << x5 << "Bs." << endl; 
    return 0;
}