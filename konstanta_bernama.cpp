/*
Nama Program	: C++ Konstanta dengan Nama
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
using namespace std;

int main(){
    const float PHI = 3.141592;	// Mendeklarasikan konstanta 3.14 bertipe float dengan nama PHI
    float volume, r, tinggi;
    r = 14;
    tinggi = 100;
    volume = PHI * r * r * tinggi;
    
    cout << "Jari-jari Tabung = " << r << endl;
    cout << "Tinggi Tabung = " << tinggi << endl;
    cout << "Volume Tabung = " << volume;
    return 0;
}
