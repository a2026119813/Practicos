#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double n1, n2, n3, n4, n5, n6, n7, n8;
    cout << "se calcula la nota de un estudiante universatario" << endl;
    cout << "introduzca sus notas sobre el 100 puntos" << endl;
    cout << "nota del 1er examen parcial: ";
    cin >> n1;
    cout << "nota del 2do examen: ";
    cin >> n2;
    cout << "nota de su examen final: ";
    cin >> n3;
    cout << "nota de sus proyectos: ";
    cin >> n4;
    if (n1 > 0 && n1 <= 100 && n2 > 0 && n2 <= 100 && n3 > 0 && n3 <= 100 && n4 > 0 && n4 <= 100)
    {
        n5 = (n1 + n2) * 0.25;
        n6 = n3 * 0.3;
        n7 = n4 * 0.2;
        n8 = n5 + n6 + n7;
        if (n8 >= 51)
        {
            cout << "APROBÓ CON LA NOTA DE: " << n8 << endl;
        }
        else
        {
            cout << "REPROBÓ CON LA NOTA DE: " << n8 << endl;
        }
    }
    else
    {
        cout << "INGRESE CORRECTAMENTE LAS NOTAS";
    }
return 0;

}