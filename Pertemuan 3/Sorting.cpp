#include <iostream> // Library standar C++ yang menyediakan fungsi input dan output.
#include <cstdlib> // Library standar C++ yang menyediakan fungsi untuk manajemen memori dinamis, pengaturan environtment, dll.
#include <ctime> // Library standar C++ yang menyediakan fungsi-fungsi terkait waktu dan tanggal.
using namespace std;

// Fungsi untuk mencetak array.
void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk mengurutkan array menggunakan Bubble Sort.
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Menampilkan setiap pertukaran nilai.
                cout << "Pertukaran " << arr[j] << " dan " << arr[j + 1] << endl;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk mengurutkan array menggunakan Insertion Sort.
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            // Menampilkan setiap pertukaran nilai.
            cout << "Pindah " << arr[j] << " ke posisi " << j + 1 << endl;
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}

// Fungsi untuk mengurutkan array menggunakan Selection Sort.
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Menampilkan setiap pertukaran nilai.
        cout << "Pertukaran " << arr[i] << " dan " << arr[min_index] << endl;
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Fungsi untuk mengurutkan array menggunakan Radix Sort.
void radix_sort(int arr[], int n) {
    const int base = 10; // Basis angka desimal.
    int max_digit = 1;   // Inisialisasi jumlah digit maksimum.

    // Mencari jumlah digit maksimum dari seluruh angka dalam array.
    for (int i = 0; i < n; ++i) {
        int num_digits = 0;
        int num = arr[i];
        while (num > 0) {
            num /= base;
            ++num_digits;
        }
        if (num_digits > max_digit) {
            max_digit = num_digits;
        }
    }

    // Melakukan pengurutan berdasarkan digit mulai dari digit paling rendah hingga paling tinggi.
    for (int exp = 1; exp <= max_digit; ++exp) {
        int output[n]; // Array untuk menyimpan hasil pengurutan berdasarkan digit.
        int count[base] = {0}; // Array untuk menyimpan jumlah kemunculan setiap digit.

        // Menghitung jumlah kemunculan setiap digit pada posisi yang sedang diurutkan.
        for (int i = 0; i < n; ++i) {
            int digit = (arr[i] / exp) % base;
            ++count[digit];
        }

        // Menghitung jumlah kemunculan setiap digit sampai posisi yang sedang diurutkan.
        for (int i = 1; i < base; ++i) {
            count[i] += count[i - 1];
        }

        // Menyusun hasil pengurutan berdasarkan digit dari belakang untuk mempertahankan stabilitas.
        for (int i = n - 1; i >= 0; --i) {
            int digit = (arr[i] / exp) % base;
            output[count[digit] - 1] = arr[i];
            --count[digit];
        }

        // Menyalin hasil pengurutan ke array asli.
        for (int i = 0; i < n; ++i) {
            arr[i] = output[i];
        }
    }
}

int main() {
    int n = 7; // Jumlah elemen dalam array.
    int nilai[n]; // Array untuk menyimpan nilai.

    // Menggunakan waktu sebagai seed untuk generator angka acak.
    srand((time(NULL)));

    // Mengisi array dengan angka acak antara 0 dan 100.
    for (int i = 0; i < n; ++i) {
        nilai[i] = rand() % 101;
    }

    // Menampilkan nilai sebelum diurutkan.
    cout << "Nilai Sebelum Sort: ";
    print_array(nilai, n);

    // Meminta pengguna memilih algoritma pengurutan.
    cout << "Pilih jenis algoritma pengurutan:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Selection Sort" << endl;
    cout << "4. Radix Sort" << endl;
    int choice;
    cout << "Masukkan pilihan Anda (1-4): ";
    cin >> choice;

    // Memilih dan menjalankan algoritma pengurutan berdasarkan pilihan pengguna.
    switch (choice) {
        case 1:
            bubble_sort(nilai, n);
            break;
        case 2:
            insertion_sort(nilai, n);
            break;
        case 3:
            selection_sort(nilai, n);
            break;
        case 4:
            radix_sort(nilai, n);
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 1;
    }

    // Menampilkan nilai setelah diurutkan.
    cout << "Hasil Setelah Pengurutan: ";
    print_array(nilai, n);

    return 0; // Mengakhiri program.
}