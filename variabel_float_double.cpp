/*
Nama Program	: C++ Menggunakan Variabel Float dan Double
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
#include <iomanip> // Diperlukan untuk memanggil setprecision()
using namespace std;

int main(){
    float inifloat; double inidouble;
    inifloat = 3.14285714286;
    inidouble = 3.14285714286;
	cout << setprecision(10); // Mengatur tingkat presisi
    cout << "Isi float = " << inifloat << endl;
    cout << "Isi double = " << inidouble << endl;
    return 0;
}
