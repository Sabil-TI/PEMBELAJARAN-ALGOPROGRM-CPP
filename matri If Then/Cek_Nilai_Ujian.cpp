#include <iostream> // mengecek status nilai
using namespace std;

int main() {
    int nilai;
    const int batasMin = 0;
    const int batasMax = 100;

    cout << "Masukkan nilai: ";
    
    // Validasi: Mengecek apakah input yang dimasukkan benar-benar angka
    if (!(cin >> nilai)) {
        cout << "Input harus berupa angka!" << endl;
        return 1; // Menghentikan program karena terjadi error input
    }

    // Logika Pengecekan: Apakah nilai berada di dalam jangkauan 0 - 100
    if (nilai >= batasMin && nilai <= batasMax) {
        cout << "Nilai valid! Anda memasukkan angka: " << nilai << endl;
        
        // Contoh tambahan untuk modul: Menentukan kelulusan
        if (nilai >= 75) {
            cout << "Status: LULUS" << endl;
        } else {
            cout << "Status: TIDAK LULUS" << endl;
        }
    } else {
        cout << "Nilai tidak valid! Angka harus antara 0 sampai 100." << endl;
    }

    return 0;
}
