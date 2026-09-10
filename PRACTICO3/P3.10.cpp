#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double m1, m2, m3, d1, d2, d3, d4, f1, f2;
    cout << "calcular las diferencias entre dos fechas" << endl;
    cout << "ingresar fecha de inicio (MM/DD)" << endl;
    cout << "__/DD: ";
    cin >> m1;
    cout << "MM/__: ";
    cin >> d1;
    cout << "ingresar fecha final (MM/DD)" << endl;
    cout << "__/DD: ";
    cin >> m2;
    cout << "MM/__: ";
    cin >> d2;
    f1 = (m1 * 30) + d1;
    f2 = (m2 * 30) + d2;
    m3 = (f2 - f1)/30;
    int m4=(int)m3;
    d3 = m3 - m4;
    d4 = d3 * 30;
    cout << "La diferencia es de: " << m4 << " meses y " << d4 << " dias.";
    return 0;
}