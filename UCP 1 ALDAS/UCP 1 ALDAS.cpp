//1.salah satu algoritma pengurutan sederhana yang bekerja dengan membandingkan pasangan - pasangan elemen berturut - turut dalam sebuah array dan menukar mereka jika tidak berada dalam urutan yang benar.
//2.Algoritma Shell Sort adalah algoritma pengurutan yang merupakan variasi dari algoritma Insertion Sort.
//Algoritma ini membagi array menjadi beberapa sub - array yang lebih kecil, kemudian menggunakan algoritma Insertion Sort untuk mengurutkan sub array tersebut.
//cara kerjanya: pemilihan gap, pengurutan sub array, pengurutan incremental, perbandingan dan pertukaran, perulangan
//3.Jika data sudah memiliki beberapa elemen yang terurut, algoritma yang paling cocok adalah Insertion Sort.
//Alasan utamanya adalah efisiensi Insertion Sort dalam menangani dataset yang sudah hampir terurut atau memiliki sebagian elemen yang sudah terurut.

#include <iostream>
using namespace std;

void selectionSort(int rafa[], int n) {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (rafa[i] < rafa[min_index]) {
                min_index = i;
            }
        }
        // Swap rafa[j] with rafa[min_index]
        int temp = rafa[j];
        rafa[j] = rafa[min_index];
        rafa[min_index] = temp;
    }
}

int main() {
    const int size = 10;
    int rafa[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> rafa[i];
    }
    // Sorting the array
    selectionSort(rafa, size);

    // Displaying the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << rafa[i] << " ";
    }
    cout << endl;

    return 0;
}