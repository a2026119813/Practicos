#include<iostream>
using namespace std;
int main () {
    int n, factorial = 1, i = 1;
    double x, suma = 0, potencia = 1;
    cout << "cálculo de una serie S=x^1/1!-x^2/2!+x^3/3!-x^4/4!+...+x^n/n!" << endl;
    cout << "ingrese el valor de x: ";
    cin >> x;
    cout << "ingrese el valor de n: ";
    cin >> n;
    while (i <= n) {
        potencia = potencia * x;
        factorial = factorial * i;
        if (i % 2 != 0) {
            suma = suma + (potencia / factorial);
        }
        else {
            suma = suma - (potencia / factorial);
        }
        i++;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}   