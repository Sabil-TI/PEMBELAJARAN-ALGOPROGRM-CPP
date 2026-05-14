#include <iostream>
using namespace std;

int main() {

    int pinBener = 1234; //pin yang harus dimasukan (anda dapat mengantinya).
    int pin;
    int kesempatan = 3; //kesempatan yang anda dapat untuk mengulang pin jika salah (anda dapat menambahkannya).

    for (int i = 1; i <= kesempatan; i++) {
        cout << "Masukan PIN ATM: ";
        cin >> pin;

        if (pin == pinBener) {
            cout << "PIN benar, Selamat Datang!" << endl; //tampilan terminal jika anda memasukan pin dengan benar.
            return 0;
        } else {
            cout << "PIN salah!" << endl; //tampilan terminal jika anda memasukan pin yang salah.

            if (i < kesempatan) {
                cout << "Sisa Percobaan: " << kesempatan - i << endl;
            } else {
                cout << "Kartu ATM dibekukan." << endl; //tampilan terminal jika anda sudah kehabisa kesempatan memasukan pin.
            }
        }
    }

    return 0;
}
