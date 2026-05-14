#include <iostream> // mengecek status nilai
using namespace std;

int main() {
    int nilai;
    int batasmax = 100;

    cout << "Masukan nilai: "; // meminta user untuk memasukan nilai
    cin >> nilai; // menyimpan nilai yang dimasukan user kedalam variabel nilai

    // perjabangan majemuk
    if (nilai > batasmax) {
        cout << "Peringatan!! nilai melebihi batas maksimal" << endl;
    }
    else if (nilai >= 90) {
        cout << "Peringkat A (Istimewa)" << endl;
    }
    else if (nilai >= 75) {
        cout << "Peringkat B (Baik)" << endl;
    }
    else if (nilai >= 60) {
        cout << "Peringkat C (Cukup)" << endl;
    }
    else {
        cout << "Peringkat D (Kurang)" << endl;
    }

    return 0;
}
