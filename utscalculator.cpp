#include <iostream>
#include <cstdlib>

using namespace std ;

int main () { 

	float a , b ; 
	int kode ; 

	menu :
	cout << "kalkulator sederhana C++ \n" ;
	cout << "UTS C++ \n\n" ;
	cout << "pilihan menu : \n" ;
	cout << "1.penjumlahan (+) \n" ;
	cout << "2.pengurangan (-) \n" ;
	cout << "3.perkalian (*) \n" ;
	cout << "4.pembagian (/) \n\n" ;
	cout << "silahkan masukan kode menu" ;
	cin >> kode ;
	if(kode > 4 || kode < 1) { 
			cout << "\nkode yang anda masukan tidak ada \nsilahkan masukan ulang kode . " ;
			system ("pause") ; 
			system ("cls") ; 
			goto menu ; 
		}
		else {
			cout << "masukan angka pertama : " 
				cin >> a ; 
			cout << "masukan angka kedua : " 
				cin >> b ;
			if (kode == 1) { 
				cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl; 
			}
			if (kode == 2) { 
				cout << "\nHasil penguranan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl;
			}
			if (kode == 3) { 
				cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl; 
			}
			if (kode == 4) { 
				cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl; 
			}

		}
	return 0 ;
}