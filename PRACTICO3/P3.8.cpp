#include <iostream>
using namespace std;

int main()
{
    double A, B, C, D, E, F, det, x, y;
    

    cout << "Sistema de dos ecuaciones con dos variables de la forma:" << endl;
    cout << "Ax + By = C" << endl;
    cout << "Dx + Ey = F" << endl;
    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    cout << "Ingrese C: ";
    cin >> C;

    cout << "Ingrese D: ";
    cin >> D;

    cout << "Ingrese E: ";
    cin >> E;

    cout << "Ingrese F: ";
    cin >> F;

    det = A * E - B * D;

    if (det != 0)
    {
        x = (C * E - B * F) / det;
        y = (A * F - C * D) / det;

        cout << "Solucion:" << endl;
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
    else
    {
        if (A * F - C * D == 0 && B * F - C * E == 0)
        {
            cout << "Tiene infinitas soluciones." << endl;
        }
        else
        {
            cout << "No tiene solucion." << endl;
        }
    }

    return 0;
}