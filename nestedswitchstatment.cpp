#include <iostream>
using namespace std ;

// I.S program memasukan data 
// F. S program menamoilkan data sesuai operasi logika

int main () {
	//kamus
	int a, b = 4 ;

	cout << " berapa 4 :2 ? " << endl ;
	cin >> a ;

	//tugas pemilihan 
	switch (a) {
		// bila tidak ada yang cocok
	default : cout << "salah" << endl ;
	break ;
	case 2 : cout << "benar" << endl ;

			switch (b) {
				case 2 : cout << "4 : 2 = 2 x 2" << endl ;
					break ;
			}
	}
		// perintah untuk mengakhiri program
	return 0 ;
}
