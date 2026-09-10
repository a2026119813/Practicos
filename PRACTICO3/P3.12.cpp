#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double d1, d2, d3, m1, m2, m3, a1, f1, f2;
    cout << "calcular la estacion en el hemisferio sur segun la fecha (considere que cada mes tiene 30 dias)" << endl;
    cout << "ingresar fecha (DD/MM/AAAA)" << endl;
    cout << "__/MM/AAAA: ";
    cin >> d1;
    cout << "DD/__/AAAA: ";
    cin >> m1;
    cout << "DD/MM/____: ";
    cin >> a1;
    f1 = (m1 * 30) + d1;
    if (f1 > 0 && f1 <= 81)
    {
        cout << "en fecha " << d1 << "/" << m1 << "/" << a1 << " la estacion es: otoño" << endl;
    }
    else if (f1 > 81 && f1 <= 171)
    {
        cout << "en fecha " << d1 << "/" << m1 << "/" << a1 << " la estacion es: invierno" << endl;
    }
    else if (f1 > 171 && f1 <= 261)
    {
        cout << "en fecha " << d1 << "/" << m1 << "/" << a1 << " la estacion es: primavera" << endl;
    }
    else if (f1 > 264 && f1 <= 360)
    {
        cout << "en fecha " << d1 << "/" << m1 << "/" << a1 << " la estacion es: verano" << endl;
    }
    else
    {
        cout << "fecha invalida";
    }
    return 0;
}