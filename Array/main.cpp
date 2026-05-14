// Pnulisan data variable array.
    // penulisan data variable yang saya tahu hanya 3 guys :D

#include <iostream>
using namespace std;

int main() {
    // 1. Tipe data 'int' untuk angka bulat
    int jumlahApel = 5;
    
    // 2. Tipe data 'float' untuk angka pecahan (wajib akhiri dengan 'f')
    float hargaPerApel = 4500.50f;
    float beratTotal = 1.25f;

    // 3. Tipe data 'bool' untuk logika true (benar) atau false (salah)
    bool apaStokAda = true;

    // Menghitung total harga menggunakan operator perkalian (*)
    float totalBayar = jumlahApel * hargaPerApel;

    // Menampilkan semua data ke layar monitor
    cout << "--- DATA TOKO BUAH ---" << endl;
    cout << "Jumlah Apel   : " << jumlahApel << " biji" << endl;
    cout << "Berat Total   : " << beratTotal << " kg" << endl;
    cout << "Total Bayar   : Rp " << totalBayar << endl;
    cout << "Status Stok   : " << apaStokAda << " (Angka 1 berarti true/ada)" << endl;

    return 0;
}
