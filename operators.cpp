#include <iostream>
using namespace std;

int main ()
{
    int x = 5, y = 3;

    //Aritmetika
    cout<< x + y << "\n"; //tambah
    cout<< x - y << "\n"; //kurang
    cout<< x * y << "\n"; //perkalian
    cout<< x / y << "\n"; //pembagian
    cout<< x % y << "\n"; //modulus (sisa bagi)

    x++; // (x + 1) Increment
    cout<< x << "\n"; 
    x--; // (x-1) Decrement
    cout<< x << "\n";

    //Assignment
    x = 5; // x = 5
    x += 7; // x = x + 7
    x -= 7; // x = x - 7
    x *= 7; // x = x * 7
    x /= 1; // x = x / 1
    x %= 3; // x = x % 3
    x &= 3; // x = x & 3
    x |= 3; // x = x | 3
    x ^= 3; // x = x ^ 3
    x >>= 7; // x = x >> 7
    x <<= 3; // x = x << 3

    //Perbandingan
    x == y; //nilai x sama dengan nilai y
    x != y; //nilai x tidak sama dengan nilai y
    x >= y; //nilai x lebih dari sama dengan nilai y
    x <= y; //nilai x kurang dari sama dengan nilai y
    x > y; //nilai x lebih dari nilai y
    x < y; //nilai x kurang dari nilai y

    //Logical Operation
    (x > 3) && (y < 10); //DAN
    (x > 3) || (y < 10); //ATAU
    !(x < 3); //TIDAK

    return 0;
}