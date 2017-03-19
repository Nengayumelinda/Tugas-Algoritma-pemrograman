#include <iostream>
using namespace std;
//tugas latihan 
//program menampilkan angka

int main(){
	//kamus
	int mahasiswa =0, lulus =0, tidak =0;
	//mahasiswa  = jumlah mahasiswa
	//lulus = jumlah mahasiswa lulus
	//tidak = jumlah mahasiswa tidak lulus
	float ip, total = 0, rata ;
	cout << "SILAHKAN MASUKAN NILAI IP : " ;
	cin >> ip ;
	while (ip > -999) {
		if (ip >= 0 && ip <= 6 ){
			mahasiswa++ ;
			total = total + ip ;
			if (ip >= 2.75) {
			lulus++ ;
			}
			else {
			tidak++ ;
			}
		}
		cout << "SILAHKAN MASUKAN NILAI IP : " ;
		cin >> ip ;
	}
//untuk mengeluarkan data
cout << endl ;
cout << "jumlah mahasiswa = " << mahasiswa << endl ;
cout << "jumlah mahasiswa lulus = " << lulus << endl ;
cout << "jumlah mahasiswa tidak lulus = " << tidak << endl ;
rata = total/mahasiswa;
cout << "rata - rata ip = " << rata ;

return 0;
	}
