#include <iostream>
using namespace std;

int main() {
    string namaObat;
    int stok, ambangBatas;

    // program yang meminta untuk input stok obat, dan ambangBatas nya

    cout << "Masukkan nama obat: ";
    cin >> namaObat;
    cout << "Masukkan jumlah stok obat: ";
    cin >> stok;
    cout << "Masukkan ambang batas minimum: ";
    cin >> ambangBatas;

    cout << "\nNama Obat   : " << namaObat << endl;
    cout << "Stok Obat   : " << stok << endl;
    cout << "Ambang Batas: " << ambangBatas << endl;

    if (stok <= ambangBatas) {
        cout << "\nPERINGATAN: Stok obat sudah mencapai atau di bawah batas minimum!" << endl;
        cout << "Segera lakukan pemesanan ulang." << endl;
    } else {
        cout << "\nStok obat masih aman." << endl;
    }

    return 0;
}
