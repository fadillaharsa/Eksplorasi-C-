/*
Nama Program	: C++ Menggunakan Variabel Short Integer
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
using namespace std;

int main(){
    float angka;
    
    angka = 254.00;
    cout << "Isi angka = " << angka << endl;
    
    angka = 2.54e2;
    cout << "Isi angka = " << angka << endl;
    angka = 2.54E2;
    cout << "Isi angka = " << angka << endl;
    
    angka = 2.54e+2;
    cout << "Isi angka = " << angka << endl;
    angka = 2.54E+2;
    cout << "Isi angka = " << angka << endl;
    
    angka = 2.54e-2;
    cout << "Isi angka = " << angka << endl;
    angka = 2.54E-2;
    cout << "Isi angka = " << angka;

    return 0;
}
