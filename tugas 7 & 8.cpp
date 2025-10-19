#include <iostream>
using namespace std;

int main() {
    const int JUMLAH_OBAT = 5;
    string namaObat[JUMLAH_OBAT] = {"Paracetamol", "Amoxicillin", "Vitamin C", "ibuprofen", "antasida DOEN"};
    int stok[JUMLAH_OBAT] = {60, 70, 90, 65, 140};

    int pilihan, indeks, jumlah;

    do {
        cout << "\n=== TRANSAKSI STOK OBAT ===" << endl;
        cout << "1. Menambah total stok obat" << endl;
        cout << "2. Mengurangi total stok obat" << endl;
        cout << "3. Menampilkan total stok obat" << endl;
        cout << "4. Keluar" << endl;
        cout << "\nsilahkan masukkan pilihan anda : ";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                cout << "\nPilih obat yang ingin ditambah stoknya:" << endl;
                for (int i = 0; i < JUMLAH_OBAT; i++) {
                    cout << i + 1 << ". " << namaObat[i] << endl;
                }
                cout << "Masukkan pilihan (1-" << JUMLAH_OBAT << "): ";
                cin >> indeks;

                if (indeks >= 1 && indeks <= JUMLAH_OBAT) {
                    cout << "Masukkan jumlah stok yang ingin ditambah: ";
                    cin >> jumlah;
                    stok[indeks - 1] += jumlah;
                    cout << "Stok " << namaObat[indeks - 1]
                         << " berhasil ditambah. Total stok sekarang: "
                         << stok[indeks - 1] << endl;
                } else {
                    cout << "Pilihan obat tidak valid!" << endl;
                }
                break;

            case 2:
                cout << "\nPilih obat yang ingin dikurangi stoknya:" << endl;
                for (int i = 0; i < JUMLAH_OBAT; i++) {
                    cout << i + 1 << ". " << namaObat[i] << endl;
                }
                cout << "Masukkan pilihan (1-" << JUMLAH_OBAT << "): ";
                cin >> indeks;

                if (indeks >= 1 && indeks <= JUMLAH_OBAT) {
                    cout << "Masukkan jumlah stok yang ingin dikurangi: ";
                    cin >> jumlah;

                    if (jumlah > stok[indeks - 1]) {
                        cout << "Stok tidak mencukupi!" << endl;
                    } else {
                        stok[indeks - 1] -= jumlah;
                        cout << "Stok " << namaObat[indeks - 1]
                             << " berhasil dikurangi. Total stok sekarang: "
                             << stok[indeks - 1] << endl;
                    }
                } else {
                    cout << "Pilihan obat tidak valid!" << endl;
                }
                break;

            case 3:
                cout << "\n=== TOTAL STOK OBAT SAAT INI ===" << endl;
                for (int i = 0; i < JUMLAH_OBAT; i++) {
                    cout << namaObat[i] << ": " << stok[i] << endl;
                }
                break;

            case 4:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;

            default:
                cout << "Maaf menu tidak tersedia." << endl;
        }

    } while (pilihan != 4);

    return 0;
}
