#include <iostream>
using namespace std ;

//I.S program mnenunggu memasukan data 
	//F.S program menampilkan data sesuai operasi logika

	int main() {
		//kamus 
		int a, b ;

		//mencari nilai prima menggunakan for 
		for (a = 2 ; a < 100 ; a++) {
			for (b = 2 ; b <= (a/b); b++)
				if (!(a%b)) break ;
			if (b > (a/b)) cout << a << " adalah nilai prima " << endl ;
		}
			//perintah mengakhiri program 
		return 0 ;
	}
