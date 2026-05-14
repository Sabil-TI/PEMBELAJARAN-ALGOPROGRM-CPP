#include <iostream>
using namespace std;
int main () {
    int pilih; //jika diterminal tidak dituliskan angka 2 maka codenya tidak akan berhenti.
    do{
        cout <<"1. Ulangi"<<endl;
        cout <<"2. Berhenti"<<endl;
        cout <<"sak sakmu:";
        cin >> pilih;

    }
    while (pilih !=2);
}