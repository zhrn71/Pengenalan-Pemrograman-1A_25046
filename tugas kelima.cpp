#include <iostream>
using namespace std;

int main() {
    string nama[50]; 
    int stok[50];
    int jumlah = 0;
    string ulang;

    do {
        cout << "Masukkan nama obat: ";
        cin >> nama[jumlah];
        cout << "Masukkan stok obat: ";
        cin >> stok[jumlah];

        jumlah++;

        cout << "Apakah ingin menambah obat lagi? (ya/tidak): ";
        cin >> ulang;
    } while (ulang == "ya" || ulang  == "Ya");

    
    cout << "\n=== Daftar Obat ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i+1 << ". " << nama[i] << " - Stok: " << stok[i] << " -> ";
        
        if (stok[i] > 50) {
            cout << "Stok Aman";
        } else if (stok[i] >= 20) {
            cout << "Stok Menipis";
        } else {
            cout << "Stok Habis, Segera Restok!";
        }
        cout << endl;
    }

    return 0;
}
