#include <iostream>
using namespace std ;

// I.S program memasukan data 
// F. S program menamoilkan data sesuai operasi logika

int main () {
	//kamus
	int a, b ;

	cout << "masukan angka pertama untuk di bandingkan : ";
	cin >> a ;
	cout << endl ;

	cout << "masukan nilai ke dua untuk di bandingkan : " ;
	cin >> b ;
	cout << endl ;

	//perintah jika kondisi true (bener)
	if( a >= 0, b >= 0) {
		if(a >= b){
			cout << a << "lebih besar dari atau sama dengan " << b << endl ;
		} else if(a > b){
			cout << a << "lebih kecil dari atau sama dengan " << b << endl ;
		} else {
			cout << "selain angka tidak bisa di bandingkan " << endl ;
		}
	}// perintah jika kondisi selain true 
	else {
		cout << "selain angka tidak bisa di bandingkan " << endl ;
	}

	//perintah mengakhiri program
	return 0 ;
}