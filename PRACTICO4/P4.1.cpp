#include<iostream>

using namespace std;
int main ()
{
    int N, suma = 0, i = 1;
    cout << "suma de numeros enteros " << endl;
    cout << "ingrese el valor de N: ";
    cin >> N;
    while (i <= N) {
        suma = suma + i;
        i++;
    }
    cout << "la suma es: " << suma << endl;
    return 0;
}