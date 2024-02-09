#include <iostream> // Library standar C++ untuk input dan output
#include <string> // Library standar C++ untuk tipe data string
#include <cctype> // Library standar C++ untuk fungsi-fungsi terkait karakter

using namespace std;

// Struktur untuk menyimpan data tokoh mahasiswa
struct TokohMahasiswa {
    int NIM; // Nomor Induk Mahasiswa
    string Nama; // Nama Mahasiswa
    string NomorHP; // Nomor HP Mahasiswa
    string Organisasi; // Organisasi yang diikuti oleh Mahasiswa
};

int main() {
    int isiBuku = 5;  // Maksimum 5 tokoh dalam buku telepon
    TokohMahasiswa bukuTelepon[isiBuku]; // Array untuk menyimpan data tokoh-tokoh

    // Mengisi data tokoh-tokoh dalam buku telepon
    bukuTelepon[0] = {1234, "Syafira", "0812341", "BEMU"};
    bukuTelepon[1] = {5678, "Salsabila", "0815678", "BEMU"};
    bukuTelepon[2] = {9123, "Jesen", "0819123", "BEMF"};
    bukuTelepon[3] = {4567, "Alvin", "0814567", "HIMA"};
    bukuTelepon[4] = {7890, "Namima", "0817890", "UKM"};

    int pilihan;
    cout << "Cari berdasarkan:\n";
    cout << "1. NIM\n";
    cout << "2. Nama\n";
    cout << "3. Nomor HP\n";
    cout << "4. Organisasi\n";
    cout << "Pilihan: ";
    cin >> pilihan; // Meminta pengguna untuk memilih kriteria pencarian

    if (pilihan < 1 || pilihan > 4) { // Validasi pilihan pengguna
        cout << "Pilihan tidak valid." << endl;
        return 1; // Mengakhiri program dengan kode error
    }

    bool ditemukan = false; // Variabel untuk menandai apakah data ditemukan
    string cariData;

    cout << "Masukkan data yang ingin dicari: ";
    cin.ignore(); // Mengabaikan newline dari cin sebelumnya
    getline(cin, cariData); // Mengambil input dari pengguna

    // Mengubah semua karakter input pengguna menjadi huruf besar
    for (char &ch : cariData) {
        ch = toupper(ch); // Mengubah karakter menjadi huruf besar
    }

    // Mencari data berdasarkan pilihan pengguna
    for (int i = 0; i < isiBuku; i++) {
        bool match = false; // Variabel untuk menandai apakah ada kesesuaian data
        string data;
        switch (pilihan) {
            case 1:
                data = to_string(bukuTelepon[i].NIM); // Mengonversi NIM menjadi string
                break;
            case 2:
                data = bukuTelepon[i].Nama;
                break;
            case 3:
                data = bukuTelepon[i].NomorHP;
                break;
            case 4:
                data = bukuTelepon[i].Organisasi;
                break;
        }

        // Mengubah semua karakter dalam data menjadi huruf besar
        for (char &ch : data) {
            ch = toupper(ch); // Mengubah karakter menjadi huruf besar
        }

        if (data == cariData) { // Mengecek apakah data cocok dengan pencarian pengguna
            cout << "Data ditemukan:" << endl;
            cout << "NIM: " << bukuTelepon[i].NIM << endl;
            cout << "Nama: " << bukuTelepon[i].Nama << endl;
            cout << "Nomor HP: " << bukuTelepon[i].NomorHP << endl;
            cout << "Organisasi: " << bukuTelepon[i].Organisasi << endl;
            ditemukan = true; // Menandai bahwa data telah ditemukan
        }
    }

    if (!ditemukan) { // Menampilkan pesan jika data tidak ditemukan
        cout << "Data tidak ditemukan." << endl;
    }

    return 0; // Mengakhiri program
}
