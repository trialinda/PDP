#include <iostream>
using namespace std;

long long  saldo = 5000000000;
int main () {
    cout << " --- Tarik Tunai ---" << endl ;
    int jumlah ;
    cout << " \n MASUKKAN JUMLAH PENRIKAN TUNAI \n "  ;
    cout << "      YANG ANDA INGINKAN \n";
    cout << "  MINIMAL PENARIKAN RP 50.000 \n ";
    cout << " Rp : " ;
    cin >> jumlah ;

    if (jumlah <= 0 ){
        cout << " Jumlah tidak boleh Rp.0 " << endl;
        return 0;
    }
    if (jumlah <= 50000){
        cout << " Jumlah mininal penarikan Rp 50.000 \n";
        return 0;
    }
    if (jumlah >= saldo ){
        cout << " Saldo tidak mencukupi \n ";
        return 0;
    }
    saldo -= jumlah ;
    cout << " Penarikan berhasil \n";
return 0;
}