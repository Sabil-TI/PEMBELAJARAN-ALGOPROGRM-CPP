#include <iostream> // mengecek status nilai
using namespace std;

int main() {
    int nilai;
    const int batasMin = 0;
    const int batasMax = 100;

    cout << "Masukkan nilai: "; // meminta user untuk memasukkan nilai

    if (!(cin >> nilai)) {
        cout << "Input harus berupa angka" << endl;
        return 0;
    }

    // percabangan majemuk
    if (nilai < batasMin || nilai > batasMax) {
        cout << "Peringatan! Nilai harus berada di antara 0 sampai 100" << endl;
    }
    else if (nilai >= 90) {
        cout << "Predikat A (Istimewa)" << endl;
    }
    else if (nilai >= 75) {
        cout << "Predikat B (Baik)" << endl;
    }
    else if (nilai >= 60) {
        cout << "Predikat C (Cukup)" << endl;
    }
    else {
        cout << "Predikat D (Kurang)" << endl;
    }

    return 0;
}
