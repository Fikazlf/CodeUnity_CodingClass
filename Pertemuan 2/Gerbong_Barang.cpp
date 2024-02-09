#include <iostream> // Library standar C++ yang menyediakan fungsi input dan output.
using namespace std;

int main() { // Fungsi utama program.
    int n; // Variabel untuk menyimpan jumlah barang yang dimasukkan ke gerbong.

    // Meminta pengguna memasukkan jumlah barang.
    cout << "Masukkan jumlah barang yang dimasukkan ke gerbong : ";
    cin >> n;

    // Membuat array untuk menyimpan nama barang sejumlah 'n'.
    string barang[n];

    // Menampilkan pembatas.
    cout << "--------------------------------------------------------" << endl;

    // Meminta pengguna memasukkan nama barang sebanyak 'n'.
    for(int i = 0; i < n; i++) {
        cout << "Masukkan barang ke - " << i + 1 << " : ";
        cin >> barang[i];
    }

    // Menampilkan pembatas.
    cout << "--------------------------------------------------------" << endl;

    // Menampilkan hasil laporan barang.
    cout << "Hasil laporan barang : " << endl;
    for(int i = 0; i < n; i++) {
        cout << "- " << barang[i] << endl;
    }

    return 0; // Mengakhiri program.
}
