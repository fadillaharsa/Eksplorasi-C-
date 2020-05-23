/*
Nama Program	: C++ Operator Geser
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
using namespace std;

int main(){
    short int x = 90;
    cout << "Nilai x sebelum geser= " << x << endl;
    x = x << 1;
    cout << "Nilai x setelah geser kiri = " << x << endl << endl;

    
    x = 90;
    cout << "Nilai x sebelum geser = " << x << endl;
    x = x >> 1;
    cout << "Nilai x setelah geser kanan = " << x;

    return 0;
}
