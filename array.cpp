#include <iostream>
using namespace std;

int main ()
{
    
    //Array
    /*Array dalam pemrograman adalah struktur data yang menyimpan sekumpulan elemen dengan tipe data yang sama dalam satu variabel. 
    Setiap elemen diakses menggunakan sebuah "indeks" numerik, yang dalam C++ dimulai dari 0. 
    Array berfungsi untuk mengelola dan memanipulasi data dalam jumlah besar secara efisien dan terstruktur. */
    
    int i;
    string buah[4] = {"alpukat", "apel", "mangga", "manggis"};
    cout << buah[0] <<" "<< buah[1] <<" "<< buah[2] <<" "<< buah[3];

    buah[0] = "sirsak";
    cout <<"\n"<< buah[0] <<"\n";

    for (i=0; i<4; i++) {
        cout<< i + 1 << " = " << buah[i]<<"\n";
    }

    int angka[5] = {10, 20, 30, 40, 50};

    // For-Each Loop
    for (int angka : angka) {
        cout << angka << "\n";
    }

    for (string buah : buah) {
        cout << buah << "\n";
    }

    //Omit Array Size
    string anime[] = {"Wind Breaker", "Captain Tsubasa", "Naruto"};
    //Dalam C++ array bisa dibuat dengan tanpa menentukkan ukuran dari array.
    for (string anime : anime) {
        cout << anime << "\n";
    }

    //Array bisa dideklarasikan walaupun belum ditambahkan elemen di dalamnya
    string jurusan[4];
    jurusan [0] = "STEI-K";
    jurusan [1] = "Informatika";
    jurusan [2] = "Teknik Komputer";
    jurusan [3] = "Teknik Elektro";

    for (string jurusan : jurusan) {
        cout << jurusan << "\n";
    }

    //Dalam C++, ukuran dallam Array adalah tetap, tidak bisa ditambah ataupun dihapus
    //Jika ingin melakukan operasi penambahan, pengurangan, ataupun pemodifikasian elemen, maka gunakan vektor

    return 0;
}