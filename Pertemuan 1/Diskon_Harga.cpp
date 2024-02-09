#include <iostream> // Library standar C++ yang menyediakan fungsi input dan output.
using namespace std;

// Fungsi utama program.
int main() { 
    float subTotalHarga; // Variabel untuk menyimpan jumlah total belanjaan.
    float diskon; // Variabel untuk menyimpan besaran diskon.
    float totalHarga; // Variabel untuk menyimpan jumlah total harga setelah diskon.

    cout << "Masukkan harga belanjaan anda : "; // Meminta pengguna memasukkan harga belanjaan.
    cin >> subTotalHarga; // Mengambil input dari pengguna berupa harga belanjaan.

    if(subTotalHarga >= 50000 && subTotalHarga < 70000) { // Memeriksa apakah harga belanjaan berada dalam rentang tertentu.
        diskon = 10; // Menetapkan besaran diskon.
        totalHarga = (subTotalHarga * diskon) / 100; // Menghitung jumlah diskon.
        subTotalHarga = subTotalHarga - totalHarga; // Menghitung total harga setelah diskon.
        cout << "Diskon : 10%" << endl; // Menampilkan informasi diskon.
        cout << "Total harga yang harus dibayar : " << subTotalHarga << endl; // Menampilkan total harga yang harus dibayar.
    } else if(subTotalHarga >= 70000 && subTotalHarga < 100000) { // Memeriksa kondisi lain jika kondisi sebelumnya tidak terpenuhi.
        diskon = 15; // Menetapkan besaran diskon.
        totalHarga = (subTotalHarga * diskon) / 100; // Menghitung jumlah diskon.
        subTotalHarga = subTotalHarga - totalHarga; // Menghitung total harga setelah diskon.
        cout << "Diskon : 15%" << endl; // Menampilkan informasi diskon.
        cout << "Total harga yang harus dibayar: " << subTotalHarga << endl; // Menampilkan total harga yang harus dibayar.
    } else if(subTotalHarga >= 100000) { // Memeriksa kondisi lain jika kondisi sebelumnya tidak terpenuhi.
        diskon = 20; // Menetapkan besaran diskon.
        totalHarga = (subTotalHarga * diskon) / 100; // Menghitung jumlah diskon.
        subTotalHarga = subTotalHarga - totalHarga; // Menghitung total harga setelah diskon.
        cout << "Diskon : 20%" << endl; // Menampilkan informasi diskon.
        cout << "Total harga yang harus dibayar : " << subTotalHarga << endl; // Menampilkan total harga yang harus dibayar.
    } else { // Kondisi jika tidak ada diskon.
        cout << "Anda tidak mendapat diskon" << endl; // Menampilkan pesan bahwa tidak ada diskon.
        cout << "Total harga yang harus dibayar : " << subTotalHarga << endl; // Menampilkan total harga yang harus dibayar.
    }

    return 0; // Mengindikasikan bahwa program telah selesai dijalankan.
}
