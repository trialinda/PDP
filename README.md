ATM Sederhana – Program C++

Proyek ini merupakan simulasi mesin ATM sederhana menggunakan bahasa pemrograman C++. Program dibuat untuk membantu mahasiswa memahami konsep dasar seperti fungsi, kondisi, perulangan, array, serta alur transaksi pada sistem perbankan sederhana.

Fitur Program

Program ini menyediakan beberapa layanan dasar seperti ATM pada umumnya:

Autentikasi PIN
Pengguna harus memasukkan PIN dengan batas maksimal tiga percobaan. Jika gagal, program akan menghentikan proses dan akun dianggap diblokir.

Cek Saldo
Menampilkan saldo terbaru dari akun pengguna.

Tarik Tunai
Pengguna dapat menarik uang dengan aturan:

Tidak boleh melebihi saldo

Tidak boleh angka negatif

Minimal penarikan Rp 20.000

Setor Tunai
Pengguna dapat menambah saldo dengan aturan:

Tidak boleh nol atau negatif

Harus kelipatan Rp 10.000

Transfer Antar Rekening
Pengguna dapat mentransfer nominal tertentu ke nomor rekening lain selama saldo mencukupi.

Riwayat Transaksi
Program menyimpan riwayat transaksi dalam array 1 dimensi, seperti:

“Setor 100000”

“Tarik 50000”

“Transfer 20000 ke 222”

Struktur dan Alur Program

Program ini menggunakan beberapa fungsi agar lebih terstruktur:

login() untuk autentikasi PIN

menu() sebagai tampilan utama

cekSaldo(), tarikTunai(), setorTunai(), transfer() sebagai fungsi transaksi

tampilRiwayat() untuk menampilkan daftar transaksi

Variabel penting seperti PIN, saldo, dan array untuk riwayat transaksi diletakkan sebagai variabel global untuk memudahkan akses antar fungsi.

Tujuan Pembelajaran

Program ini dibuat untuk memperkenalkan konsep:

Penggunaan fungsi dalam C++

Logika dasar perbankan pada ATM

Validasi input pengguna

Manipulasi angka dan string

Penyimpanan riwayat transaksi menggunakan array

Cara Menjalankan Program

Kompilasi program dengan compiler C++, misalnya g++:

g++ atm.cpp -o atm


Jalankan program:

./atm


Masukkan PIN yang telah ditentukan di dalam kode (default: 1234) untuk masuk ke menu utama.
