#include<iostream>
using namespace std;
int main ()
{
    int n, suma = 0, i = 1;
    cout << "suma de los numeros impares" << endl;
    cout << "ingrese el valor N: ";
    cin >> n;
    while (i <= n){
        if (i % 2 != 0) {
            suma = suma + i;
        }
        i++;
    }
    cout << "la suma de los impares es: " << suma << endl;
    return 0;
}