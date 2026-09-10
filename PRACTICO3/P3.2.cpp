#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double n1, n2, n3, n4, n5;
    cout << "calculadora para un cilindro" << endl;
    cout << "ingrese el radio: ";
    cin >> n1;
    cout << "ingrese la altura del cilindro: ";
    cin >> n2;
    n3 = 3.1416;
    n4 = 2 * n3 * n1 * (n1 + n2);
    n5 = n3 * n1 * n1 * n2;
    cout << "el area del cilindro es: " << n4 << "UM^2 (Unidades Metricas)"<< endl;
    cout << "el volumen es de: " << n5 << "UM^3";
    return 0;


}