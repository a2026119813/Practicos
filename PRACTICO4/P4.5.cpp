#include<iostream>
using namespace std;
int main ()
{
    int n, producto = 1, i = 1;
    cout << "Producto de una sucesión de numeros hasta el valor de N" << endl;
    cout << "introduce el valor de N: ";
    cin >> n;
    while (i <= n) {
        producto = producto * i;
        i++;
    }
    cout << "el producto es: " << producto << endl;
    return 0;
}