#include <iostream>
using namespace std;

/* For loop adalah struktur kontrol dalam pemrograman yang memungkinkan eksekusi blok kode secara berulang 
berdasarkan jumlah iterasi yang telah ditentukan. For loop digunakan ketika programmmer 
sudah mengetahui secara pasti berapa kali blok kode akan dijalankan. */

int main ()
{
    int i; //Iterasi; berfungsi untuk menentukan berapa kali blok kode dijalankan. Iterasi dimulai dari angka 0
    int cetak;
    string nama;

    cout<<"Masukkan nama: ";
    cin>>nama;
    cout<<"Berapa kali dicetak? ";
    cin>>cetak;

    //for (inisialisasi; kondisi; pembaruan) {blok kode}
    for(i=0; i<cetak; i++) { //Blok kode akan dijalankan selama nilai i kurang dari nilai cetak
        cout<<nama<<" ";
    } 

    /* Operator increment-decrement adalah operator yang digunakan untuk menaikkan atau menurunkan 
    sebanyak satu dari nilai variabel yang dikenai operasi. Operator increment adalah tanda ++ 
    yang disimpan sebelum atau sesudah variabel, dan operator decrement adalah tanda -- 
    yang disimpan sebelum atau sesudah operasi.

    pre-increment / ++i = menambah nilai i dengan 1, lalu mengembalikan nilai i
    post-increment / i++ = mengembalikan nilai i, lalu menambah nilai i dengan 1
    pre-decrement / --i = mengurangi nilai i dengan 1, lalu mengembalikan nilai i
    post-decrement / i-- = mengembalikan nilai i, lalu mengurangi nilai i dengan 1 */


    //Nested Loop
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

    // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }



    return 0;
}