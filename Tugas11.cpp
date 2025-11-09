#include <iostream>
using namespace std;

double LuasSegiEmpat(double panjang, double lebar){
    double hasil = panjang * lebar;
    return hasil;
}

double LuasSegitiga(double alas, double tinggi){
    double hasil = 0.5 * alas * tinggi;
    return hasil;
}

double LuasLingkaran(double r){
    double hasil = 3.14 * r * r;
    return hasil;
}

void Menu(){
    cout << "\nSelamat datang di Program Menghitung Luas!\n";
    cout << "1. Menghitung luas Segi Empat\n";
    cout << "2. Menghitung luas Segitiga\n";
    cout << "3. Menghitung luas Lingkaran\n";
    cout << "4. Keluar\n";
    cout << "\nMasukkan pilihan anda : ";
}

int main(){
    double p, l, a, t, r;
    int pilih;
    string ulang = "ya";

    while (ulang == "ya" || ulang == "Ya") {

        Menu();
        cin >> pilih;

        switch (pilih){
            case 1:
                cout << "\nAnda memilih program untuk Menghitung Luas Segi Empat\n";
                cout << "Silahkan masukkan Panjang : ";
                cin >> p;
                cout << "Masukkan Lebar   : ";
                cin >> l;
                cout << "Luas Segi Empatnya yaitu = " << LuasSegiEmpat(p, l) << endl;
                break;

            case 2:
                cout << "\nAnda memilih program untuk menghitung luas Segi tiga\n";
                cout << "Silahkan masukkan Alas   : ";
                cin >> a;
                cout << "Masukkan Tinggi : ";
                cin >> t;
                cout << "Hasilnya = " << LuasSegitiga(a, t) << endl;
                break;

            case 3:
                cout << "\nAnda memilih program untuk menghitung Luas Lingkaran\n";
                cout << "Silahkan masukkan Jari-jari : ";
                cin >> r;
                cout << "Hasilnya = " << LuasLingkaran(r) << endl;
                break;

            case 4:
                cout << "\nKeluar dari program\n";
                return 0;

            default:
                cout << "Pilihan tidak sesuai!" << endl; 
                cout << "Rada kocak si bro ini " << endl; 
                cout << "Kalo gak fokus jangan lupa minum Kapal Api Bro!! eheheheh";
        }

        cout << "\nApakah ingin mencoba yang lainnya? (ya/tidak) : ";
        cin >> ulang;
    }

    cout << "\nTerima kasih sudah menggunakan program ini!\n";

    return 0;
}
