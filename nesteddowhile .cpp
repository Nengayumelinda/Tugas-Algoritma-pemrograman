#include <iostream>
using namespace std ;

	//I.S program mnenunggu memasukan data 
	//F.S program menampilkan data sesuai operasi logika

	int main() {
		//kamus 
		int a = 0, b = 0 ;


		// melakukan perulangan di dalam perulangan
		do {
			do {
				cout << " a = " << a << ", b = " << b << endl ;
				b++ ;
			}
			while ( b < 3 ) ; 
			a++ ;
	}
	while ( a < 4 ) ;

	/* kenapa nanti hasilnya menjadi
	a = 0 , b = 0
	a = 0 , b = 1
	a = 0 , b = 2
	a = 1 , b = 3
	a = 2 , b = 4
	a = 3 , b = 5
	kenapa a = 0 keluar 3x?
	karena saat perulangan "b" terjadi variable "a" masih keadaan 0
	dan perulangan b di ulang 3x , lalu kenapa "b" bisa sampai 4 ?
	karena saat perulangan "a" berlangsung sampai "b" sudah terisi sampai 2
	maka saat "a" melakukan perulangan sampai 3 "b" akan terisi lagi 
	karena "b++" masih berlangsung tapi tidak menyebabkan "a = 1" menjadi 3x karena "b" sudah lebih dari 3 */

	//perintah mengakhiri program
	return 0;
}