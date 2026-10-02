#include<iostream>
using namespace std;
int main () {
    int a, b, x, y, resto;
    cout << "calculo del MCM de 2 numeros enteros, donde MCM=(A*B)/MCD" << endl;

cout << "Ingrese A: ";
cin >> a;

cout << "Ingrese B: ";
cin >> b;

x = a;
y = b;

while (b != 0) {
    resto = a % b;
    a = b;
    b = resto;
}

int mcd = a;

int mcm = x * y / mcd;

cout << "El MCM es: " << mcm << endl;
return 0;
}