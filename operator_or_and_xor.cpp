/*
Nama Program	: C++ OR AND XOR
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
using namespace std;

int main(){
    unsigned short int angka1 = 82;
    unsigned short int angka2 = 98;
    unsigned short int x, y, z;

    x = angka1 | angka2; // Operasi OR menggunakan |
    y = angka1 & angka2; // Operasi AND menggunakan &
    z = angka1 ^ angka2; // Operasi XOR menggunakan ^

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z;

    return 0;
}
