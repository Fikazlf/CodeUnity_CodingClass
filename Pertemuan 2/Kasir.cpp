#include <iostream> // Library standar C++ yang menyediakan fungsi input dan output.
#include <sstream> // Library standar C++ yang menyediakan fasilitas untuk manipulasi string.
using namespace std;

int main() { // Fungsi utama program.
    char jenisMenu; // Variabel untuk menyimpan jenis menu yang dipilih.
    int totalHarga = 0; // Variabel untuk menyimpan total harga pesanan.
    int uangPembeli, kembalian; // Variabel untuk menyimpan jumlah uang pembeli dan kembalian.
    char pesanLagi; // Variabel untuk menyimpan pilihan apakah ingin memesan lagi.
    string strukPesanan = " "; // Variabel untuk menyimpan daftar pesanan.

    // Loop utama program untuk memesan makanan/minuman.
    do {
        system("cls"); // Menghapus layar konsol sebelum menampilkan menu lagi.
        // Menampilkan menu kafe.
        cout << "==================== MENU CAFE ====================" << endl;
        cout << "A. Makanan" << endl;
        cout << "   1. Nasi Goreng     - Rp 20,000" << endl;
        cout << "   2. Mie Goreng      - Rp 18,000" << endl;
        cout << "   3. Ayam Goreng     - Rp 25,000" << endl;
        cout << "B. Minuman" << endl;
        cout << "   4. Kopi Hitam      - Rp 10,000" << endl;
        cout << "   5. Teh Manis       - Rp 8,000" << endl;
        cout << "   6. Jus Jeruk       - Rp 15,000" << endl;
        cout << "====================================================" << endl;

        // Meminta pengguna memilih jenis menu.
        cout << "Pilih jenis menu (A/B): ";
        cin >> jenisMenu;

        int pilihan, quantity; // Variabel untuk menyimpan pilihan menu dan jumlah pesanan.

        // Memproses pesanan makanan jika jenis menu adalah A atau a.
        if ((jenisMenu == 'A' || jenisMenu == 'a')) {
            cout << "Pilih menu (1-3): ";
            cin >> pilihan;

            cout << "Jumlah yang ingin dipesan: ";
            cin >> quantity;

            // Switch case untuk menambahkan harga pesanan makanan ke total harga.
            switch (pilihan) {
                case 1:
                    totalHarga += 20000 * quantity;
                    {
                        stringstream ss;
                        ss << "Nasi Goreng - " << quantity << " porsi (" << quantity * totalHarga << "), " ;
                        strukPesanan += ss.str(); // Menambahkan pesanan ke struk pesanan.
                    }
                    break;
                case 2:
                    totalHarga += 18000 * quantity;
                    {
                        stringstream ss;
                        ss << "Mie Goreng - " << quantity << " porsi (" << quantity * totalHarga << "), " ;
                        strukPesanan += ss.str(); // Menambahkan pesanan ke struk pesanan.
                    }
                    break;
                case 3:
                    totalHarga += 25000 * quantity;
                    {
                        stringstream ss;
                        ss << "Ayam Goreng - " << quantity << " porsi (" << quantity * totalHarga << "), " ;
                        strukPesanan += ss.str(); // Menambahkan pesanan ke struk pesanan.
                    }
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
                    return 1;
            }
        } else if ((jenisMenu == 'B' || jenisMenu == 'b')) { // Memproses pesanan minuman jika jenis menu adalah B atau b.
            cout << "Pilih menu (4-6): ";
            cin >> pilihan;

            cout << "Jumlah yang ingin dipesan: ";
            cin >> quantity;

            // Switch case untuk menambahkan harga pesanan minuman ke total harga.
            switch (pilihan) {
                case 4:
                    totalHarga += 10000 * quantity;
                    {
                        stringstream ss;
                        ss << "Kopi Hitam - " << quantity << " gelas (" << quantity * totalHarga << "), " ;
                        strukPesanan += ss.str(); // Menambahkan pesanan ke struk pesanan.
                    }
                    break;
                case 5:
                    totalHarga += 8000 * quantity;
                    {
                        stringstream ss;
                        ss << "Teh Manis - " << quantity << " gelas (" << quantity * totalHarga << "), " ;
                        strukPesanan += ss.str(); // Menambahkan pesanan ke struk pesanan.
                    }
                    break;
                case 6:
                    totalHarga += 15000 * quantity;
                    {
                        stringstream ss;
                        ss << "Jus Jeruk - " << quantity << " gelas (" << quantity * totalHarga << "), " ;
                        strukPesanan += ss.str(); // Menambahkan pesanan ke struk pesanan.
                    }
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
                    return 1;
            }
        } else {
            cout << "Jenis menu tidak valid." << endl;
            return 1;
        }

        // Meminta pengguna apakah ingin memesan lagi.
        cout << "Apakah ada pesanan lain? (Y/N): ";
        cin >> pesanLagi;

    } while (pesanLagi == 'Y' || pesanLagi == 'y'); // Melanjutkan loop jika pengguna ingin memesan lagi.

    // Menampilkan pesanan sebelum mencetak struk pembelian.
    cout << "\n==================== PESANAN ANDA ====================" << endl;
    cout << "Pesanan             : " << strukPesanan << endl;
    cout << "Total Harga         : Rp " << totalHarga << endl;

    // Mencetak struk pembelian.
    cout << "\n==================== STRUK PEMBELIAN ====================" << endl;
    cout << "Total Harga          : Rp " << totalHarga << endl;

    // Meminta pengguna memasukkan jumlah uang pembeli.
    cout << "Masukkan jumlah uang pembeli: Rp ";
    cin >> uangPembeli;

    // Menghitung kembalian.
    kembalian = uangPembeli - totalHarga;

    // Menampilkan kembalian.
    cout << "Kembalian            : Rp " << kembalian << endl;
    cout << "=========================================================" << endl;

    return 0; // Mengakhiri program.
}