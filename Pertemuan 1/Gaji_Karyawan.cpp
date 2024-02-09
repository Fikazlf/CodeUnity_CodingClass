#include <iostream> // Library standar C++ yang menyediakan fungsi input dan output.
using namespace std;

int main() { // Fungsi utama program.
    int gaji; // Variabel untuk menyimpan gaji pokok karyawan.
    int totalGaji; // Variabel untuk menyimpan total gaji setelah menghitung tunjangan, pajak, dan uang transport.
    int tunjanganIstri = 0; // Variabel untuk menyimpan tunjangan istri, diinisialisasi ke 0.
    int tunjanganAnak = 0; // Variabel untuk menyimpan tunjangan anak, diinisialisasi ke 0.
    int uangTransport; // Variabel untuk menyimpan uang transport.
    int pajak; // Variabel untuk menyimpan jumlah pajak yang harus dibayar.
    string jenisKaryawan; // Variabel untuk menyimpan jenis karyawan (tetap atau tidak).

    // Menampilkan judul program.
    cout << "----------------------------------------------" << endl;
    cout << "Program hitung tunjangan" << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    // Meminta pengguna memasukkan gaji pokok.
    cout << "Masukkan gaji pokok anda : ";
    cin >> gaji;

    // Meminta pengguna memilih jenis karyawan (tetap atau tidak).
    cout << "----------------------------------------------" << endl;
    cout << "Apakah anda karyawan tetap (1.ya | 2.tidak)?: ";
    cin >> jenisKaryawan;

    // Memeriksa jenis karyawan.
    if (jenisKaryawan == "1" || jenisKaryawan == "ya") { // Jika karyawan tetap.
        string istri; // Variabel untuk menyimpan jawaban apakah memiliki istri.
        string anak; // Variabel untuk menyimpan jawaban apakah memiliki anak.
        cout << "Apakah anda memiliki istri (1.ya | 2.tidak)?: ";
        cin >> istri;
        cout << "Apakah anda memiliki anak (1.ya | 2.tidak)?: ";
        cin >> anak;

        // Menghitung tunjangan istri jika memiliki istri.
        if (istri == "1" || istri == "ya") {
            tunjanganIstri = (gaji * 10) / 100;
        }

        // Menghitung tunjangan anak jika memiliki anak.
        if (anak == "1" || anak == "ya") {
            int jumlahAnak; // Variabel untuk menyimpan jumlah anak.
            cout << "Berapa anak yang anda miliki : ";
            cin >> jumlahAnak;
            if (jumlahAnak > 2)
                jumlahAnak = 2; // Hanya 2 anak yang dihitung.
            tunjanganAnak = (gaji * 5 / 100) * jumlahAnak;
        }

        // Menghitung pajak (2% dari gaji) dan uang transport (Rp100.000).
        pajak = (gaji * 2) / 100;
        uangTransport = 100000;
    } else if (jenisKaryawan == "2" || jenisKaryawan == "tidak") { // Jika karyawan tidak tetap.
        // Menghitung pajak (1% dari gaji) dan uang transport (Rp80.000).
        pajak = (gaji * 1) / 100;
        uangTransport = 80000;
    } else { // Jika pilihan jenis karyawan tidak valid.
        cout << "Perintah yang anda masukkan salah" << endl;
        return 0; // Mengakhiri program jika perintah salah.
    }

    // Menampilkan informasi gaji, tunjangan, pajak, dan uang transport.
    cout << "----------------------------------------------" << endl;
    cout << "Gaji pokok : " << gaji << endl;
    cout << "Tunjangan istri : " << tunjanganIstri << endl;
    cout << "Tunjangan anak : " << tunjanganAnak << endl;
    cout << "Pajak : " << pajak << endl;
    cout << "Uang Transport : " << uangTransport << endl;

    // Menghitung total gaji.
    totalGaji = gaji + tunjanganIstri + tunjanganAnak - pajak + uangTransport;

    // Menampilkan total gaji.
    cout << "----------------------------------------------" << endl;
    cout << "Total Gaji : " << totalGaji << endl;

    return 0; // Mengakhiri program.
}
