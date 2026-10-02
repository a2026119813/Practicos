#include<iostream>
using namespace std;
int main () {
    int n, factorial = 1, i = 1;
    cout << "cálculo de factoriales" << endl;
    cout << "ingrese el valor de n: ";
    cin >> n;
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }
    cout << "El factorial de " << n << " es: " << factorial << endl;
    return 0;
}