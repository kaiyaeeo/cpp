#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    //Vector dapat menyimpan banyak elemen sekaligus, hampir sama seperti Array.
    //Namun berbeda dengan Array, ukuran vektor bersifat dinamis yang berarti elemen dalam vektor dapat bertambah dan berkurang sesuai kebutuhan.

    // initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};
    //vektor <tipe data> nama vektor
    //ukuran vektor tidak dideklarasikan karena sifat vektor yang dinamis

    // uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // method 3
    vector<int> vector3(5, 12);
    //sama dengan vector <int> vector = {12, 12, 12, 12, 12}, 5 sebagai ukuran vektor, dan 12 sebagai elemen vektor

    cout << "vector1 = ";

    // ranged loop
    for (const int& i : vector1) {
        cout << i << "  ";
    }

    cout << "\nvector2 = ";

    // ranged loop
    for (const int& i : vector2) {
        cout << i << "  ";
    }

    cout << "\nvector3 = ";

    // ranged loop
    for (int i : vector3) {
        cout << i << "  ";
    }

    //Operasi dalam vektor

    //Penambahan elemen ke vektor
    //menggunakan push_back()
    vector <string> tawa = {"wkwkwk", "5555"};
    tawa.push_back("lmao");
    for (string tawa : tawa) {
        cout<< "\n" << tawa <<" ";
    }

    //Mengakses elemen vektor
    //menggunakan at()
    vector<int> angka2 {5, 6, 7, 8, 9};

    cout << "Element pada Index 0: " << angka2.at(0) << endl;
    cout << "Element pada Index 2: " << angka2.at(3) << endl;
    cout << "Element pada Index 4: " << angka2.at(4);

    //Mengubah elemen vektor
    //menggunakan at()
    angka2.at(1) = 10;
    cout<< "\nAngka pada Index 1: " << angka2.at(1);
    
    for (const int& i : angka2) {
        cout << "\n" << i ;
    } 

    //Menghapus elemen vektor
    //menggunakan pop_back()
    angka2.pop_back(); //menghapus elemen terakhir pada vector angka2
    cout<<"\nSetelah dihapus";
    for (const int& i : angka2) {
        cout << "\n" << i ;
    }

    /* Fungsi Vector dalam C++
    size() = mengembalikan jumlah elemen yang ada dalam vektor
    clear() = menghapus semua elemen vektor
    front() = mengembalikan elemen pertama vektor
    back() = mengembalikan elemen terakhir dari vektor
    empty() = mengembalikan 1(benar) jika vektornya kosong
    capacity() = memeriksa ukuran keseluruhan vektor */

    return 0;
}