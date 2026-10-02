#include<iostream>
using namespace std;
int main () {
    int N;

cout << "Ingrese N: ";
cin >> N;

if (N == 0 || N == 1) {
    cout << "Fibonacci = 1" << endl;
}
else {

    int a = 1;
    int b = 1;
    int siguiente;
    int i = 2;

    while (i <= N) {

        siguiente = a + b;

        a = b;
        b = siguiente;

        i++;
    }

    cout << "Fibonacci = " << b << endl;
}
return 0;
}