#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, d, i, r;
    double x1, x2;
    cout << "Calcular las raices de una ecuacion de la forma Ax^2 + Bx + C = 0" << endl;
    cout << "introduce los valores" << endl;
    cout << "valor de A: ";
    cin >> a;
    cout << "valor de B: ";
    cin >> b;
    cout << "valor de C: ";
    cin >> c;
    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            cout << "la ecuacion es una identidad c = 0" << endl;
        }
        else
        {
            cout << "Sin solucion" << endl;
        }
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        x1 = -c/b;
        cout << "ecuacion lineal:" << endl;
        cout << "la solucion es: x = " << x1 << endl; 
    }
    else //if (a != 0 && b != 0 && c != 0)
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "tiene 2 raices diferentes:" << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
        }
        else if (d == 0)
        {
        x1 = -b / (2 * a);
        cout << "tiene raiz real doble: x = " << x1 << endl; 
        }
        else
        {
            r = -b / (2 * a);
            i = sqrt(-d) / (2 * a);
            cout << "tiene dos raices complejas conjugadas:" << endl;
            cout << "x1 = " << r << endl << "x2 = " << i << endl;
        }
    }
    return 0;
}