#include <iostream>
using namespace std;

int main() {
    char nama[5][30];   
    int stok[5];        
    int harga[5];       
    int jumlah = 5;

    cout << "=== PROGRAM DATA OBAT APOTEK ===\n\n";

    
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan data obat ke-" << i + 1 << endl;
        cout << "Nama Obat  : ";
        cin >> nama[i]; 
        cout << "Jumlah/Stok: ";
        cin >> stok[i];
        cout << "Harga      : ";
        cin >> harga[i];
        cout << endl;
    }

   
    cout << "\n\t\t=== DAFTAR DATA OBAT APOTEK ===\n";
    cout << "--------------------------------------------------------------\n";
    cout << "No\t\tNama Obat\t\tStok\t\tHarga\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "\t\t" 
             << nama[i] << "\t\t\t" 
             << stok[i] << "\t\t" 
             << harga[i] << endl;
    }

    cout << "--------------------------------------------------------------\n";

    return 0;
}
