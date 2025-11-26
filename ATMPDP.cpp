#include <iostream>
#include <string>
using namespace std;

string pinBenar = "12345";
int saldo = 1000000;
string riwayat[100];
int jumlahTransaksi = 0;

// Fungsi login
bool login() {
    string inputPin;
    int percobaan = 0;
    
    while (percobaan < 3) {
        cout << "\n=== LOGIN ATM ===" << endl;
        cout << "Masukkan PIN: ";
        cin >> inputPin;
        
        if (inputPin == pinBenar) {
            cout << "Login berhasil!" << endl;
            return true;
        } else {
            percobaan++;
            cout << "PIN salah! Kesempatan tersisa: " << (3 - percobaan) << endl;
        }
    }
    
    cout << "Akun diblokir!" << endl;
    return false;
}

// Fungsi cek saldo
void cekSaldo() {
    cout << "\n=== CEK SALDO ===" << endl;
    cout << "Saldo Anda: Rp " << saldo << endl;
}

// Fungsi tarik tunai
void tarikTunai() {
    int jumlah;
    
    cout << "\n=== TARIK TUNAI ===" << endl;
    cout << "Masukkan jumlah: Rp ";
    cin >> jumlah;
    
    if (jumlah > saldo) {
        cout << "Saldo tidak cukup!" << endl;
    } else if (jumlah <= 0) {
        cout << "Jumlah tidak valid!" << endl;
    } else if (jumlah < 20000) {
        cout << "Minimal penarikan Rp 20.000" << endl;
    } else {
        saldo -= jumlah;
        riwayat[jumlahTransaksi] = "Tarik " + to_string(jumlah);
        jumlahTransaksi++;
        cout << "Penarikan berhasil!" << endl;
        cout << "Saldo tersisa: Rp " << saldo << endl;
    }
}

// Fungsi setor tunai
void setorTunai() {
    int jumlah;
    
    cout << "\n=== SETOR TUNAI ===" << endl;
    cout << "Masukkan jumlah: Rp ";
    cin >> jumlah;
    
    if (jumlah <= 0) {
        cout << "Jumlah tidak valid!" << endl;
    } else if (jumlah % 10000 != 0) {
        cout << "Harus kelipatan Rp 10.000" << endl;
    } else {
        saldo += jumlah;
        riwayat[jumlahTransaksi] = "Setor " + to_string(jumlah);
        jumlahTransaksi++;
        cout << "Setoran berhasil!" << endl;
        cout << "Saldo sekarang: Rp " << saldo << endl;
    }
}

// Fungsi transfer
void transfer() {
    int jumlah;
    string noRekening;
    
    cout << "\n=== TRANSFER ===" << endl;
    cout << "Nomor rekening tujuan: ";
    cin >> noRekening;
    cout << "Jumlah transfer: Rp ";
    cin >> jumlah;
    
    if (jumlah > saldo) {
        cout << "Saldo tidak cukup!" << endl;
    } else if (jumlah <= 0) {
        cout << "Jumlah tidak valid!" << endl;
    } else {
        saldo -= jumlah;
        riwayat[jumlahTransaksi] = "Transfer " + to_string(jumlah) + " ke " + noRekening;
        jumlahTransaksi++;
        cout << "Transfer berhasil!" << endl;
        cout << "Saldo tersisa: Rp " << saldo << endl;
    }
}

// Fungsi riwayat transaksi
void riwayatTransaksi() {
    cout << "\n=== RIWAYAT TRANSAKSI ===" << endl;
    
    if (jumlahTransaksi == 0) {
        cout << "Belum ada transaksi" << endl;
    } else {
        for (int i = 0; i < jumlahTransaksi; i++) {
            cout << (i + 1) << ". " << riwayat[i] << endl;
        }
    }
}

// Menu utama
void menuUtama() {
    int pilihan;
    
    do {
        cout << "\n======= MENU ATM =======" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Tarik Tunai" << endl;
        cout << "3. Setor Tunai" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Riwayat Transaksi" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                cekSaldo();
                break;
            case 2:
                tarikTunai();
                break;
            case 3:
                setorTunai();
                break;
            case 4:
                transfer();
                break;
            case 5:
                riwayatTransaksi();
                break;
            case 6:
                cout << "Terima kasih telah menggunakan ATM!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        
    } while (pilihan != 6);
}

int main() {
    cout << "=== SIMULASI MESIN ATM SEDERHANA ===" << endl;
    
    if (login()) {
        menuUtama();
    }
    
    return 0;
}