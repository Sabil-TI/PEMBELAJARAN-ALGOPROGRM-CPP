//Pernyataan dalam bahasa C/C++ Struktur kontrol pemilihan if (....) then {....} if (....) then {....} else {....}


#include <iostream>
using namespace std;

int main() {
    // =========================================================================
    // 1. STRUKTUR: if (kondisi) { ... }
    // Fungsi: Menjalankan kode di dalam kurung kurawal HANYA JIKA kondisi bernilai benar (true).
    // Jika kondisi salah (false), kode di dalamnya dilewati begitu saja.
    // =========================================================================
    
    int nilaiUjian = 85;
    bool lulusUjian = false;

    cout << "--- 1. CONTOH IF TUNGGAL ---" << endl;

    // Memeriksa apakah nilaiUjian lebih besar dari 75
    if (nilaiUjian > 75) {
        // Blok kode ini bertindak sebagai "then"
        cout << "Selamat! Anda lulus ujian." << endl;
        lulusUjian = true; // Mengubah nilai bool menjadi true
    }
    
    cout << "Status kelulusan saat ini: " << lulusUjian << endl << endl;


    // =========================================================================
    // 2. STRUKTUR: if (kondisi) { ... } else { ... }
    // Fungsi: Menyediakan jalan alternatif. 
    // JIKA kondisi benar, jalankan blok IF. JIKA kondisi salah, jalankan blok ELSE.
    // =========================================================================
    
    float suhuTubuh = 38.2f; // Menggunakan tipe data float

    cout << "--- 2. CONTOH IF-ELSE ---" << endl;

    // Memeriksa kondisi suhu tubuh
    if (suhuTubuh < 37.5f) {
        // Dijalankan jika suhu di bawah 37.5
        cout << "Suhu tubuh Anda normal: " << suhuTubuh << " C" << endl;
        cout << "Anda diperbolehkan masuk ruangan." << endl;
    } 
    else {
        // Dijalankan SECARA OTOMATIS jika kondisi di atas tidak terpenuhi (salah)
        cout << "Suhu tubuh Anda tinggi: " << suhuTubuh << " C" << endl;
        cout << "Peringatan: Anda mengalami demam!" << endl;
    }

    return 0;
}

// singkatnya if itu pilihan awal, dan else itu jika pilihan awal tidak terpenuhi. "jika dia tidak baik untukmu maka lupakanlah dia :D"