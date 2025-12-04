# 🏧 Simulasi Mesin ATM Sederhana

<div align="center">

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-Educational-blue?style=for-the-badge)

*Program simulasi mesin ATM untuk pembelajaran C++*

</div>

---

## 📋 Deskripsi

Program simulasi mesin ATM sederhana yang dibuat menggunakan bahasa pemrograman C++. Program ini mensimulasikan berbagai fungsi dasar ATM seperti login, cek saldo, tarik tunai, setor tunai, transfer, dan melihat riwayat transaksi.

## ✨ Fitur

| Fitur | Deskripsi |
|-------|-----------|
| 🔐 **Login dengan PIN** | Sistem autentikasi dengan 3 kali kesempatan input PIN |
| 💰 **Cek Saldo** | Melihat saldo rekening saat ini |
| 💵 **Tarik Tunai** | Menarik uang dengan minimal penarikan Rp 20.000 |
| 💳 **Setor Tunai** | Menyetor uang dengan kelipatan Rp 10.000 |
| 📤 **Transfer** | Mengirim uang ke rekening tujuan |
| 📜 **Riwayat Transaksi** | Melihat catatan semua transaksi yang telah dilakukan |

## ⚙️ Spesifikasi

```
PIN Default          : 12345
Saldo Awal          : Rp 1.000.000
Maks. Login         : 3 kali percobaan
Minimal Penarikan   : Rp 20.000
Kelipatan Setoran   : Rp 10.000
Kapasitas Riwayat   : 100 transaksi
```

## 🚀 Cara Menggunakan

### Kompilasi Program

```bash
g++ atm.cpp -o atm
```

### Menjalankan Program

**Linux/Mac:**
```bash
./atm
```

**Windows:**
```bash
atm.exe
```

### Langkah Penggunaan

1. ▶️ Jalankan program
2. 🔑 Masukkan PIN (default: **12345**)
3. 📱 Pilih menu yang diinginkan (1-6)
4. ✅ Ikuti instruksi untuk setiap transaksi
5. 🚪 Pilih menu 6 untuk keluar

## 📂 Struktur Program

```cpp
┌─────────────────────────────────┐
│         main()                  │
│    Program Entry Point          │
└──────────┬──────────────────────┘
           │
           ▼
┌─────────────────────────────────┐
│       login()                   │
│   Autentikasi Pengguna          │
└──────────┬──────────────────────┘
           │
           ▼
┌─────────────────────────────────┐
│     menuUtama()                 │
│   Menu Utama Program            │
└──────────┬──────────────────────┘
           │
           ├─► cekSaldo()
           ├─► tarikTunai()
           ├─► setorTunai()
           ├─► transfer()
           └─► riwayatTransaksi()
```

## 🛡️ Validasi Input

- ✅ PIN harus sesuai (maksimal 3 kali percobaan)
- ✅ Jumlah penarikan tidak boleh melebihi saldo
- ✅ Minimal penarikan Rp 20.000
- ✅ Setoran harus kelipatan Rp 10.000
- ✅ Jumlah transfer tidak boleh melebihi saldo
- ✅ Input harus berupa angka positif

## 📸 Screenshot

```
======= MENU ATM =======
1. Cek Saldo
2. Tarik Tunai
3. Setor Tunai
4. Transfer
5. Riwayat Transaksi
6. Keluar
Pilih menu: _
```

## ⚠️ Catatan Penting

> ⚡ Program ini adalah simulasi sederhana untuk tujuan pembelajaran
> 
> 💾 Data tidak tersimpan secara permanen (menggunakan variabel global)
> 
> 🔒 PIN dan data rekening di-hardcode dalam program

## 💻 Persyaratan Sistem

| Komponen | Requirement |
|----------|-------------|
| **Compiler** | g++, MinGW, atau Visual C++ |
| **C++ Standard** | C++11 atau lebih baru |
| **OS** | Windows, Linux, atau macOS |
| **RAM** | Minimal 512 MB |

## 📝 Lisensi

Program ini dibuat untuk tujuan **edukasi dan pembelajaran** pemrograman C++.

---

<div align="center">

**Made with ❤️ for Learning C++**

*Jika ada pertanyaan atau saran, silakan buat issue atau pull request*

⭐ Star repository ini jika bermanfaat!

</div>
