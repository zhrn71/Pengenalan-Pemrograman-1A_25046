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

    string namaObat6 = "Dexametason";
    int stok6 = 84;
    double harga6 = 23000.0;

    string namaObat7 = "Lopamid";
    int stok7 = 65;
    double harga7  = 26000.0;

    string namaObat8 = "Acyclovir";
    int stok8 = 80;
    double harga8 = 20000.0;

    string namaObat9 = "Piroxicam";
    int stok9 = 57;
    double harga9 = 30000.0;

    string namaObat10 = "Antasida DOEN";
    int stok10 = 120;
    double harga10  = 14000.0;


    double totalBelanja = 0;

    while (lanjut == "ya") {
        cout << "\n=====Daftar Obat Apotek Prinma Husads=====\n";
        cout << "1.  " << namaObat1  << " | Stok: " << stok1  << " | Harga: Rp" << harga1  << endl;
        cout << "2.  " << namaObat2  << " | Stok: " << stok2  << " | Harga: Rp" << harga2  << endl;
        cout << "3.  " << namaObat3  << " | Stok: " << stok3  << " | Harga: Rp" << harga3  << endl;
        cout << "4.  " << namaObat4  << " | Stok: " << stok4  << " | Harga: Rp" << harga4  << endl;
        cout << "5.  " << namaObat5  << " | Stok: " << stok5  << " | Harga: Rp" << harga5  << endl;
        cout << "6.  " << namaObat6  << " | Stok: " << stok6  << " | Harga: Rp" << harga6  << endl;
        cout << "7.  " << namaObat7  << " | Stok: " << stok7  << " | Harga: Rp" << harga7  << endl;
        cout << "8.  " << namaObat8  << " | Stok: " << stok8  << " | Harga: Rp" << harga8  << endl;
        cout << "9.  " << namaObat9  << " | Stok: " << stok9  << " | Harga: Rp" << harga9  << endl;
        cout << "10. " << namaObat10 << " | Stok: " << stok10 << " | Harga: Rp" << harga10 << endl;

        int pilih, jumlahBeli;
        cout << "\nPilih nomor obat yang ingin dibeli (1-10): ";
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

        } else  if (pilih == 6) {
            if (jumlahBeli <= stok6) {
                total = jumlahBeli * harga6;
                namaDipilih = namaObat6;
                stok6 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 7) {
            if (jumlahBeli <= stok7) {
                total = jumlahBeli * harga7;
                namaDipilih = namaObat7;
                stok7 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 8) {
            if (jumlahBeli <= stok8) {
                total = jumlahBeli * harga8;
                namaDipilih = namaObat8;
                stok8 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 9) {
            if (jumlahBeli <= stok9) {
                total = jumlahBeli * harga9;
                namaDipilih = namaObat9;
                stok9 -= jumlahBeli;
            } else {
                cout << "Stok tidak mencukupi.\n";
                continue;
            }
        } else if (pilih == 10) {
            if (jumlahBeli <= stok10) {
                total = jumlahBeli * harga10;
                namaDipilih = namaObat10;
                stok10 -= jumlahBeli;
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
        cout << "Total    : Rp" << total << endl;

        cout << "\nApakah anda ingin membeli lagi? (ya/tidak): ";
        cin >> lanjut;
    }

    double diskon = 0.0;
    if (totalBelanja >= 1000000) {
        diskon = 0.25; 
    } else if (totalBelanja >= 700000) {
        diskon = 0.20; 
    } else if (totalBelanja >= 300000) {
        diskon = 0.15; 
    } else if (totalBelanja >=100000) {
        diskon = 0.10;
    }

    double potongan = totalBelanja * diskon;
    double totalAkhir = totalBelanja - potongan;

    cout << "Total belanja kamu adalah : Rp" << totalBelanja << endl;
    if (diskon > 0) {
        cout << "Diskon (" << (diskon * 100) << "%) : -Rp" << potongan << endl;
        cout << "Total setelah diskon      : Rp" << totalAkhir << endl;
    }

    cout << "\nTerima kasih telah berbelanja di Apotek Prima Husada! Semoga lekas sembuh dan sehat selalu!\n";

    return 0;
}

