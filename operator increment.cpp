/*
Nama Program	: C++ Operator Increment
Pemrogram		: Muhammad Fadillah Arsa
Credit			: www.informatikawan.com
*/

#include <iostream>
using namespace std;

int main(){
	//Penaikan di belakang
    int a = 100;
    int b;
    b = 50 + a++;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    //Penaikan di depan
    int c = 100;
    int d;
    d = 50 + ++c;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
