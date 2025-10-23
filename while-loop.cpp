#include <iostream>
using namespace std;

int main()
{
    //While loop
    //While loop akan terus menerus mengulang blok kode selama kondisi yang ditentukan bernilai benar
    //Apabila kondisi while tidak terpenuhi, maka blok kode tidak akan berjalan
    int bil;
    int jumlah_angka = 0;

    cout<<"masukan angka positif: ";
    cin>>bil;

    if (bil==0){ //Kondisional if digunakan untuk mengantisipasi apabila user memasukkan angka 0
        jumlah_angka = 1;
    }

    //Blok kode loop while akan terus-menerus mengeksekusi bilangan yang dimasukkan user hingga bilangan tersebut tidak lebih dari 0
    while (bil > 0) {
        jumlah_angka++;
        bil = bil/10;
    }
    cout<<"Jumlah angka adalah: "<<jumlah_angka<<endl;

    //Do While Loop
    //Do While loop adalah perulangan while yang akan menjalankan blok kodenya setidaknya satu kali sebelum memeriksa kebenaran kondisi
    //Apabila kondisi benar, maka akan dilakukan perulangan hingga kondisi bernilai salah
    int usia;

    do {
        cout<<"Masukkan usia anda: ";
        cin>>usia;
        if (usia<=0) {
            cout<<"Usia harus lebih dari 0. Coba lagi!"<<endl;
        }
    } while (usia <= 0); 
    cout<<"Usia yang dimasukkan valid: "<<usia<<endl;

    //Program mengecek jika usia yang dimasukkan kurang dari sama dengan 0 (kondisi = true), maka program akan melakukan perulangan
    //Dan jika user memasukkan usia lebih dari 0 (kondisi = false), maka program akan berhenti dan mencetak usia yang dimasukkan user

    
    return 0;
} 
