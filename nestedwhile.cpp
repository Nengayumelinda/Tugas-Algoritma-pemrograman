#include <iostream>
using namespace std ;

	//I.S program mnenunggu memasukan data 
	//F.S program menampilkan data sesuai operasi logika

	int main() {
		//kamus 
		int a = 0 ;

		cout << "true = 1 dan false = 0" << endl ;

		// menentukan true dan false untuk diskrit menggunakan while
		while (a < 2 ){

			int b = 0 ;
			while (b < 2 ) {

				int c = 0 ;
				while (c < 2 ){
		
					int d = 0 ;
					while (d < 2 ){
						cout << " a = " << a << ", b = " << b << ", c = " << c << " dan d = " << d << endl ;
						d++;
			
					}c++;
				}b++;
			}a++;
		}
			//perintah mengakhiri program 
			return 0 ;
		}
