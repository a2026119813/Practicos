#include<iostream>
using namespace std;
int main()
{
    int n, suma = 0, i = 1;
    cout << "suma de cuadrados hasta N números" << endl;
    cout << "introduce el valor N: ";
    cin >> n;
    while (i <= n) {
        suma = suma + i * i;
        i++;
    }
    cout << "la suma de los cuadrados es: " << suma << endl;
    return 0;
}