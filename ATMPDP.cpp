#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int percobaan = 0;

    while (percobaan < 3) {
        cout << "Masukkan PIN: ";
        cin >> pin;

        if (pin == 1234) {
            cout << "Login berhasil!" << endl;
            return 0;    
        } else {
            percobaan++;
            cout << "PIN salah! Percobaan ke-" << percobaan << endl;
        }
    }

    cout << "Akun diblokir! Terlalu banyak percobaan." << endl;
    return 0;
}
