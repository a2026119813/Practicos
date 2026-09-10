#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double p1, p2, p3, p4, p5, a, b, c, d, e, f, g;
    cout << "Menu de la salteñeria" << endl;
    cout << "seleccione las cantidades que desea adquirir:" << endl;
    cout << "Salteña de pollo Bs.3.50 Cantidad: ";
    cin >> p1;
    cout << "Salteña de carne Bs.4 Cantidad: ";
    cin >> p2;
    cout << "empanada de queso Bs.3 Cantidad: ";
    cin >> p3;
    cout << "refresco (500ml) Bs.5 Cantidad: ";
    cin >> p4;
    cout << "agua mineral Bs.3 Cantidad: ";
    cin >> p5;
    g = p1 + p2 + p3 + p4 + p5;
    if (g > 0)
    {
        a = p1 * 3.5;
        b = p2 * 4;
        c = p3 * 3;
        d = p4 * 5;
        e = p5 * 3;
        f = a + b + c + d + e;
        cout << "Salteña de pollo - Subtotal: Bs." << a << endl;
        cout << "alteña de carne - Subtotal: Bs." << b << endl;
        cout << "empanada de queso - Subtotal: Bs." << c << endl;
        cout << "refresco (500ml) - Subtotal: Bs." << d << endl;
        cout << "agua mineral - Subtotal: Bs." << e << endl;
        cout << "Total a pagar: Bs." << f << endl;
    }
    else
    {
        cout << "introduzca valores validos";
    }
return 0;
}