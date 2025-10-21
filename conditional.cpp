#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout<<"Masukkan nilai ujian: ";
    cin>>nilai;

    //conditional digunakan untuk mengecek beberapa kondisi secara berurutan
    if (nilai >= 90) { //if dicek pertama kali, jika benar, maka blok kode yang ada dalam if akan dieksekusi
        cout<<"A";
    } else if ((nilai < 90) && (nilai >= 70)) { //jika kondisi if tidak terpenuhi, selanjutnya program akan mengecek kondisi else if, dan jika benar maka blok kode dalam else if akan dieksekusi
        cout<<"B";    
    } else { //jika semua kondisi sebelumnya tidak terpenuhi, maka blok else akan dieksekusi secara langsung oleh program
        cout<<"E";
    } "\n";

    //short hand if else
    //bentuk lain untuk menyatakan if, else if, else secara singkat
    int angka;
    cout<<"\n"<<"Masukkan angka: ";
    cin>>angka;
    string hasil = (angka > 50) ? "Angka besar" :  "Angka kecil"; //"Angka besar" akan dicetak jika kondisi benar dan "Angka kecil" akan dicetak jika kondisi salah
    cout<< hasil << "\n";

    //nested if
    //if di dalam if
    bool shiftD = true;

    if (shiftD) {
        if (nilai > 70) {
            cout<< "Selamat anda tidak remidi";
        } else {
            cout<< "Anda remidi";
        }
    } else {
        cout<< "Anda bukan shift D";
    }


    return 0;
}