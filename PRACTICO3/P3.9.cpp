#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double m1, d1, d3, h1, h3, m2;

    cout << "calculadora de minutos" << endl << "ingrese la cantidda de minutos totales que quiera convertir a dias, horas y minutos (__min): ";
    cin >> m1;
    d1 = m1/1440;
    int d2 = (int)d1;
    d3 = d1 - d2;
    h1 = d3 * 24;
    int h2 = (int)h1;
    h3 = h1 - h2;
    m2 = h3 * 60;
    cout << "se calcula un tiempo de: " << d2 << " dias, " << h2 << " horas y " << m2 << " minutos.";
    return 0;
}