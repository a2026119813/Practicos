#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double n1, n2, n3;
    string nombre;

    cout << "calculo del aguinaldo navideño" << endl;
    cout << "ingrese su noombre: ";
    cin >> nombre;
    cout << "ingrese su salario mensual: ";
    cin >> n1;
    cout << "ingrese la cantidad de meses trabajados: ";
    cin >> n2;
    if (n1 >= 3300 && n2 >= 3 && n2 <= 12)
    {
        n3 = (3300 * n2) / 12;
        cout << "trabajador: " << nombre << endl << "pago total de aguinaldo: " << n3 << "Bs." << endl;
    }
    else
    {
        cout << "sin derecho a aguinaldo o datos invalidos";
    }
    return 0;


}