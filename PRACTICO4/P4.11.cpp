#include<iostream>
using namespace std;
int main () {
    int A, B, resto;
    cout << "calculo del MCD de dos numeros enteros usando el algoritmo de euclides" << endl;
    cout << "Ingrese A: ";
    cin >> A;
    
    cout << "Ingrese B: ";
    cin >> B;

while (B != 0) {
    resto = A % B;
    A = B;
    B = resto;
}

cout << "El MCD es: " << A << endl;
return 0;
}