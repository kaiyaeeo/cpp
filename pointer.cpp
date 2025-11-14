#include <iostream>
using namespace std;

int main() {
    // KONSEP DASAR MEMORI DAN VARIABEL

    // Setiap variabel disimpan di memori (RAM) dengan alamat unik
    int angka = 42;
    
    // Untuk melihat alamat memori variabel, gunakan operator &
    cout << "Nilai variabel angka: " << angka << endl;
    cout << "Alamat memori variabel angka: " << &angka << endl;

    // KONSEP DASAR POINTER

    /*Pointer adalah variabel yang menyimpan alamat memori
    Simbol penting
    & → "alamat dari" (address of)
    * → "nilai yang ditunjuk oleh" (dereference) */

    //Deklarasi pointer: tipe_data *nama_pointer;
    int *pointerAngka;  // Pointer ke tipe data integer
    
    // Mengisi pointer dengan alamat variabel
    pointerAngka = &angka;
    
    cout << "\n--- Konsep Dasar Pointer ---" << endl;
    cout << "Isi pointerAngka (alamat memori): " << pointerAngka << endl;
    cout << "Nilai yang ditunjuk pointerAngka: " << *pointerAngka << endl;

    // OPERASI DENGAN POINTER

    // Mengakses nilai melalui pointer (dereferencing)
    cout << "\n--- Operasi dengan Pointer ---" << endl;
    cout << "Nilai angka: " << angka << endl;
    cout << "Nilai melalui pointer: " << *pointerAngka << endl;

    // Mengubah nilai melalui pointer
    *pointerAngka = 100;
    cout << "\nSetelah *pointerAngka = 100:" << endl;
    cout << "Nilai angka: " << angka << endl;
    cout << "Nilai melalui pointer: " << *pointerAngka << endl;

    // Operasi aritmatika melalui pointer
    *pointerAngka += 50;
    cout << "\nSetelah *pointerAngka += 50:" << endl;
    cout << "Nilai angka: " << angka << endl;

    // POINTER DAN ARRAY

    cout << "\n--- Pointer dan Array ---" << endl;
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptrArr = arr;  // arr sama dengan &arr[0]
    
    cout << "Alamat array: " << arr << endl;
    cout << "Alamat elemen pertama: " << &arr[0] << endl;
    
    // Mengakses elemen array melalui pointer
    cout << "\nMengakses array melalui pointer:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(ptrArr + i) << endl;
    }

    // Aritmatika pointer pada array
    cout << "\nAritmatika pointer:" << endl;
    cout << "*ptrArr = " << *ptrArr << endl;
    ptrArr++;  // Pindah ke elemen berikutnya
    cout << "Setelah ptrArr++: " << *ptrArr << endl;
    ptrArr--;  // Kembali ke elemen sebelumnya
    cout << "Setelah ptrArr--: " << *ptrArr << endl;

    // POINTER DAN STRING

    cout << "\n--- Pointer dan String ---" << endl;
    
    // String sebagai array karakter
    char kota[] = "Jakarta";
    char *ptrKota = kota;
    
    cout << "String melalui array: " << kota << endl;
    cout << "String melalui pointer: " << ptrKota << endl;
    
    // Menampilkan string karakter per karakter melalui pointer
    cout << "Karakter per karakter: ";
    while(*ptrKota != '\0') {
        cout << *ptrKota;
        ptrKota++;
    }
    cout << endl;

    // ARRAY DARI POINTER

    cout << "\n--- Array dari Pointer ---" << endl;
    char *hari[] = {
        "Senin", "Selasa", "Rabu", 
        "Kamis", "Jumat", "Sabtu", "Minggu"
    };
    
    for(int i = 0; i < 7; i++) {
        cout << "Hari " << i+1 << ": " << hari[i] 
        << " (alamat: " << (void*)hari[i] << ")" << endl;
    }

    // POINTER MENUNJUK POINTER

    cout << "\n--- Pointer Menunjuk Pointer ---" << endl;
    int nilai = 75;
    int *ptr1 = &nilai;
    int **ptr2 = &ptr1;  // Pointer ke pointer integer
    
    cout << "Nilai variabel: " << nilai << endl;
    cout << "Melalui ptr1: " << *ptr1 << endl;
    cout << "Melalui ptr2: " << **ptr2 << endl;
    
    cout << "Alamat ptr1: " << &ptr1 << endl;
    cout << "Alamat yang disimpan ptr2: " << ptr2 << endl;

    // POINTER DALAM FUNGSI

    cout << "\n--- Pointer dalam Fungsi ---" << endl;
    
    // Fungsi yang menerima parameter pointer
    auto tambahLima = [](int *ptr) {
        *ptr += 5;
    };
    
    int test = 10;
    cout << "Sebelum fungsi: " << test << endl;
    tambahLima(&test);
    cout << "Setelah fungsi: " << test << endl;

    // CONTOH

    cout << "\n--- Contoh ---" << endl;
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "p1 menunjuk: " << *p1 << ", p2 menunjuk: " << *p2 << endl;
    
    // Menukar nilai melalui pointer
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    cout << "Setelah penukaran:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "p1 menunjuk: " << *p1 << ", p2 menunjuk: " << *p2 << endl;

    return 0;
}