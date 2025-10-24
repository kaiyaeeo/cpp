#include <iostream>
using namespace std;

//Fungsi dan Prosedur

/* Fungsi dan Prosedur merupakan blok kode yang dapat dipanggil berulang kali dalam suatu program
untuk menghindari pengulangan kode yang sama. Keduanya dapat menerima parameter dan dapat digunakan untuk modularisasi program.
Fungsi dibuat untuk menghitung dan mengembalikan nilai ke program yang memanggilnya. 
Sedangkan prosedur dibuat untuk melakukan tugas tertentu secara berurutan tanpa mengembalikan nilai. */

/*Parameter adalah variabel yang menyimpan nilai untuk diproses di dalam fungsi.
Parameter berfungsi untuk menyimpan nilai yang akan diinputkan ke fungsi. */

//definisi fungsi
int tambah(int a, int b) { //integer menjadi tipe data nilai kembalian tambah dan parameter fungsi a, b
    return a + b;
} 

//definisi prosedur
void rata_rata () {
    int jumlah = 0;
    int i, angka;
    float hasil;
    for (i=0; i<5; i++) {
        cout<<"\nMasukkan angka ke-"<<i+1<<": ";
        cin>>angka;
        jumlah = jumlah + angka;
    } 
    hasil = (float)jumlah/5;
    cout<<"rata-rata: "<<hasil;
}

int main ()
{
    //pemanggilan fungsi
    int hasil = tambah(5, 6);
    cout<<"Hasil: "<<hasil;
    //pemanggilan prosedur
    rata_rata();
    cout<<rata_rata;

    return 0;
}