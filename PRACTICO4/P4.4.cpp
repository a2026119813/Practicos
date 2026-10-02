#include<iostream>
using namespace std;
int main () {
    int n, suma = 0, i = 1;
    cout << "suma de impares y resta de pares hasta el valor de N" << endl;
    cout << "ingrese el valor de N: ";
    cin >> n;
    while (i <= n) {
        if (i % 2 != 0) {
            suma = suma + 1;
        }
        else {
            suma = suma - 1;
        }
        i++;
    }
cout << "la suma y resta hasta N es: " << suma << endl;
return 0;
}