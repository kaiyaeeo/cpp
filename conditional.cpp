#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout<<"Masukkan nilai ujian: ";
    cin>>nilai;

    //conditional digunakan untuk mengecek beberapa kondisi secara berurutan
    if (nilai >= 90) { //if dicek pertama kali, jika kondisi benar, blok kode akan dijalankan
        cout<<"A";
    } else if ((nilai < 90) && (nilai >= 70)) { //jika kondisi if tidak terpenuhi, selanjutnya program akan mengecek kondisi else if, dan jika benar, maka blok kode else if akan dijalankan
        cout<<"B";    
    } else { //jika semua kondisi sebelumnya tidak terpenuhi, maka blok kode else dijalankan
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

    if (shiftD) { //jika kondisi if benar, maka if else yang berada dalam blok kode if akan dijalankan dan program akan mencetak hasil pengecekan kondisi if else yang ada dalam blok kode
        if (nilai > 70) {
            cout<< "Selamat anda tidak remidi";
        } else {
            cout<< "Anda remidi";
        }
    } else {
        cout<< "Anda bukan shift D";
    }

    int hari = 7
    swtich (hari) { //switch digunakan untuk mengeksekusi banyak kondisi sekaligus
        //Switch akan dieksekusi sekali, jika terdapat kecocokan dalam salah satu case, maka blok case tersebut akan dieksekusi
        case 1:
            cout<<"Senin";
            break;
        case 2:
            cout<<"Selasa";
            break;
        case 3:
            cout<<"Rabu";
            break;
        case 4:
            cout<<"Kamis";
            break;
        case 5:
            cout<<"Jumat";
            break;
        case 6:
            cout<<"Sabtu";
            break;
        case 7:
            cout<<"Minggu";
            break;
        
    return 0;

}

