#include <iostream>
using namespace std;

struct Pasien {
    string nama;
    string penyakit;
    string alamatLengkap;
    int biaya;
};

int main() {
    Pasien data[100];  
    int jumlah = 0;
    int totalBiaya = 0;
    string pilihan;

    cout << "=== Program Data Pasien Rumah Sakit Brawira Wijaya ===\n\n";

    for (int i = 0; i < 2; i++) {
        cout << "Masukkan data pasien ke-" << jumlah + 1 << endl;
        cout << "Nama Pasien     : ";
        cin >> data[jumlah].nama;

        cout << "Jenis Penyakit  : ";
        cin >> data[jumlah].penyakit;

        cout << "Alamat Pasien   : ";
        cin.ignore();
        getline(cin, data[jumlah].alamatLengkap);

        cout << "Biaya Perawatan : Rp ";
        cin >> data[jumlah].biaya;

        totalBiaya += data[jumlah].biaya;
        jumlah++;
        cout << endl;
    }

    do {
        cout << "Apakah ingin menambah data pasien lagi? (ya/tidak): ";
        cin >> pilihan;
        cout << endl;

        if (pilihan == "ya" || pilihan == "Ya") {
            
            cout << "Masukkan data pasien ke-" << jumlah + 1 << endl;
            cout << "Nama Pasien: ";
            cin >> data[jumlah].nama;

            cout << "Jenis Penyakit: ";
            cin >> data[jumlah].penyakit;

            cout << "Alamat Lengkap Pasien (jalan, kota): ";
            cin.ignore();
            getline(cin, data[jumlah].alamatLengkap);

            cout << "Biaya Perawatan : Rp ";
            cin >> data[jumlah].biaya;

            totalBiaya += data[jumlah].biaya;
            jumlah++;
            cout << endl;
        }

    } while (pilihan == "ya" || pilihan == "Ya");

    cout << "===== Data Pasien Rumah Sakit Wijaya Brawira =====\n\n";

    for (int i = 0; i < jumlah; i++) {
        cout << "Pasien ke-" << i + 1 << endl;
        cout << "Nama Pasien     : " << data[i].nama << endl;
        cout << "Jenis Penyakit  : " << data[i].penyakit << endl;
        cout << "Alamat Pasien   : " << data[i].alamatLengkap << endl;
        cout << "Biaya Perawatan : Rp " << data[i].biaya << endl;
        cout << "------------------------------------\n";
    }

    cout << "\nTotal biaya perawatan semua pasien : Rp " << totalBiaya << endl;
    cout << "Terimakasih telah mempercayai kami dalam perawatan anda\n";
    cout << "Semoga lekas sembuh, jaga kesehatan anda, dan sehat selalu.\n";

    return 0;
}
