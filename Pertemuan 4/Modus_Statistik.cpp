#include <iostream>
using namespace std;

// Fungsi untuk mencetak frekuensi masing-masing angka dalam array
void printFrequency(float arr[], int n) {
    int freq[100] = {0}; // Array untuk menyimpan frekuensi masing-masing angka

    // Menghitung frekuensi setiap angka
    for (int i = 0; i < n; ++i) {
        freq[int(arr[i])]++; // Menggunakan nilai integer dari angka sebagai indeks
    }

    // Menampilkan frekuensi setiap angka
    cout << "Frekuensi masing-masing angka:" << endl;
    for (int i = 0; i < 100; ++i) {
        if (freq[i] != 0) {
            cout << "Angka " << i << " muncul " << freq[i] << " kali" << endl;
        }
    }
}

// Fungsi untuk mencari modus dari array
float modus(float arr[], int n) {
    int max_count = 1, res = arr[0], count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            count++;
        else {
            if (count > max_count) {
                max_count = count;
                res = arr[i - 1];
            }
            count = 1;
        }
    }

    return res;
}

int main() {
    float arr[20] = {28, 29, 30, 31, 33, 34, 35, 36, 37, 37, 38, 39, 40, 41, 42, 43, 45, 46, 50};

    // Print Modus
    cout << "Modus = " << modus(arr, 20) << endl;

    // Print frekuensi masing-masing angka
    printFrequency(arr, 20);

    return 0;
}
