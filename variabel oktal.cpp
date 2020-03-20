/*
Nama Program	: C++ Konstanta Oktal dan Heksadesimal
Penjelasan		: Penulisan sistem oktal diawali dengan 0 (nol), sedangkan sistem heksadesimal diawali dengan 0x (nol dan x)
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 010;	// 10 oktal atau 8 desimal
    b = 0x9;	// 9 heksadesimal atau 9 desimal
    
    char c;
    c = 0x61;	// 61 heksadesimal atau a kecil
    
    cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c;
	
    return 0;
}
