#include<iostream>
using namespace std;
int main () {
    int N;
int i = 2;
bool primo = true;
cout << "determinar si el valor N es primo o no" << endl;
cout << "Ingrese N: ";
cin >> N;
if (N < 2) {
    primo = false;
}
else {
    while (i < N) {
        if (N % i == 0) {
            primo = false;
        }
        i++;
    }
}
if (primo) {
    cout << "El numero es primo" << endl;
}
else {
    cout << "El numero no es primo" << endl;
}
return 0;
}