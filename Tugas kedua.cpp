#include <iostream>
using namespace std;

int main()
{
    string lanjut;
    cout << "\nHai!, selamat datang di Apotek Prima Husada\n";
    cout << "\nApakah kamu ingin membeli obat? (ya/tidak): ";
    cin >> lanjut;

    
    string namaObat1 = "Paracetamol";
    int stok1 = 57;
    double harga1 = 21000.0;

    string namaObat2 = "Papaverine";
    int stok2 = 45;
    double harga2 = 18000.0;

    string namaObat3 = "Vitamin Sirup";
    int stok3 = 62;
    double harga3 = 22000.0;

    string namaObat4 = "Infalgin";
    int stok4 = 55;
    double harga4 = 27000.0;

    string namaObat5 = "Vosea";
    int stok5 = 70;
    double harga5 = 15000.0;

    double totalBelanja = 0;

    while (lanjut == "ya") {
        cout << "\n=== Daftar Obat di Apotek Prima HUsada ===" << endl;
        cout << "1. " << namaObat1 << " | Stok: " << stok1 << " | Harga: Rp" << harga1 << endl;
        cout << "2. " << namaObat2 << " | Stok: " << stok2 << " | Harga: Rp" << harga2 << endl;
        cout << "3. " << namaObat3 << " | Stok: " << stok3 << " | Harga: Rp" << harga3 << endl;
        cout << "4. " << namaObat4 << " | Stok: " << stok4 << " | Harga: Rp" << harga4 << endl;
        cout << "5. " << namaObat5 << " | Stok: " << stok5 << " | Harga: Rp" << harga5 << endl;

        int pilih, jumlahBeli;
        cout << "\nPilih nomor obat yang ingin dibeli (1-5): ";
        cin >> pilih;

        cout << "Masukkan jumlah yang ingin dibeli: ";
        cin >> jumlahBeli;

        double total = 0;


        string namaDipilih;

        if (pilih == 1) {
            if (jumlahBeli <= stok1) {
                total = jumlahBeli * harga1;
                namaDipilih = namaObat1;
                stok1 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 2) {
            if (jumlahBeli <= stok2) {
                total = jumlahBeli * harga2;
                namaDipilih = namaObat2;
                stok2 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 3) {
            if (jumlahBeli <= stok3) {
                total = jumlahBeli * harga3;
                namaDipilih = namaObat3;
                stok3 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 4) {
            if (jumlahBeli <= stok4) {
                total = jumlahBeli * harga4;
                namaDipilih = namaObat4;
                stok4 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 5) {
            if (jumlahBeli <= stok5) {
                total = jumlahBeli * harga5;
                namaDipilih = namaObat5;
                stok5 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else {
            cout << "Pilihan tidak valid.\n";
            continue;
        }

        totalBelanja += total;

        cout << "\n===== Rincian Pembelian =====" << endl;
        cout << "Obat     : " << namaDipilih << endl;
        cout << "Jumlah   : " << jumlahBeli << endl;
        cout << "total    : Rp" << total << endl;

        cout << "\nApakah anda ingin membeli lagi? (ya/tidak): ";
        cin >> lanjut;
    }

    
    cout << "\nTotal belanja kamu adalah: Rp" << totalBelanja << endl;
    cout << "Terima kasih telah berbelanja di Apotek Prima Husada! Semoga lekas sembuh dan sehat selalu!\n";

    return 0;
}
