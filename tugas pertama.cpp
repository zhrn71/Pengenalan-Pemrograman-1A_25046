#include <iostream>
#include <string>
using namespace std;

int main() {
    string lanjut;

    cout << "\n=== Cara Membuat Mie Instan ===\n";
    cout << "Hai! Apakah kamu ingin belajar cara membuat mie instan? (ya/tidak): ";
    cin >> lanjut;

    if (lanjut != "ya") {
        cout << "Oke, sampai jumpa!\n";
        return 0;
    }
    
    cout<<"\nBy the way. sebelum lanjut aku mau nanya nih. kamu tim mie goreng atau mie kuah?\n";
    cout<<"\nketikkan pilihan mu: mie goreng atau mie kuah: \n";
    cin.ignore();
    getline(cin, lanjut);
    
    cout<<"\nwah kita samaan nih, wkwkwkw. udah deh basa basi nya, yuk kita langsung ke tutornya!\n";
    
    cout << "\nLangkah 1: Siapkan mie instan, panci, air, kompor, telur (opsional) dan mangkuk.\n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;

    cout << "\nLangkah 2: Tuang air kurang lebih 500ml kedalam panci, rebus air di dalam panci sampai mendidih.\n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;

    cout << "\nLangkah 3: Masukkan mie instan ke dalam air mendidih.\n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;

    cout << "\nLangkah 4: Tunggu 3-5 menit hingga mie matang. \n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;

    cout << "\nLangkah 5: Siapkan bumbu mie instan di dalam mangkuk.\n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;

    cout << "\nLangkah 6: Tuang mie yang sudah matang ke dalam mangkuk.\n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;
    
    cout<<"\nSetelah itu lanjut rebus telur, tambahkan airnya jika sisa rebusan mie sudah tersisa sedikit, rebus telur selama 4-7 menit (bagian ini opsional ya guys)\n";
    cout<<"Ketik 'lanjut' untuk melanjutkan: ";
    cin>>lanjut;

    cout << "\nLangkah 7: Aduk mie bersama bumbu hingga merata.\n";
    cout << "Ketik 'lanjut' untuk melanjutkan: ";
    cin >> lanjut;

    cout << "\n=== Selamat! Mie instanmu sudah siap untuk disantap. Selamat makan! jangan lupa berdo'a guys! :)  ===\n";

return 0;
}