#include<iostream>
using namespace std;
int main () {
    int n, i = 1;
    double x, suma = 0, potencia = 1;
    cout << "cálculo de una serie S=x^1+x^2+x^3+...+x^n" << endl;
    cout << "ingrese el valor de x: ";
    cin >> x;
    cout << "ingrese el valor de n: ";
    cin >> n;
    while (i <= n) {
        potencia = potencia * x;
        suma = suma + potencia;
        i++;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}