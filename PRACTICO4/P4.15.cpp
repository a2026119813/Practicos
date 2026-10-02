#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;
int main() {
    int HH = 0;
    int MM = 0;
    int SS = 0;
    cout << "reloj en formato HH:MM:SS" << endl;
    while (true) {
        cout << "\r"
             << setfill('0') << setw(2) << HH << ":"
             << setfill('0') << setw(2) << MM << ":"
             << setfill('0') << setw(2) << SS;
        this_thread::sleep_for(chrono::seconds(1));
        SS++;
        if (SS == 60) {
            SS = 0;
            MM++;
        }
        if (MM == 60) {
            MM = 0;
            HH++;
        }
        if (HH == 24) {
            HH = 0;
        }
    }
    return 0;
}