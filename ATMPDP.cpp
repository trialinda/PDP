#include <iostream>
using namespace std;

string riwayatTransaksi[100];
int indeksRiwayatTransaksi = 0;
int saldo = 0;
int main() {
    int pin = 1234;
    int percobaan = 0;

    while (percobaan < 3) {
        cout << "Masukkan PIN: ";
        cin >> pin;

        if (pin == 1234) {
            cout << "Login berhasil!" << endl;
            return 0; 
            setorTunai();   
        } else {
            percobaan++;
            cout << "PIN salah! Percobaan ke-" << percobaan << endl;
        }
    }

    cout << "Akun diblokir! Terlalu banyak percobaan." << endl;

    return 0;

}

void setorTunai(){
    int setorTunai;
    cout << "Masukkan jumlah setor tunai Anda: ";
    cin >> setorTunai;

    if (setorTunai > 0 && setorTunai % 10000 == 0){
        cout << "Setor tunai sebesar Rp." << setorTunai << "berhasil!" << endl;
        saldo += setorTunai;
        riwayatTransaksi[indeksRiwayatTransaksi++] = "Setor Tunai: Rp." + to_string(setorTunai);
    }
}
