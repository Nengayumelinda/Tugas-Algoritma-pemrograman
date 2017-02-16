#include <iostream>
#include <cstdlib>
// I.S program kalkulator
// F.S menampilkan hasil program kalkulator

using namespace std ;

int main () { // fungsi bawaan main jalankan otomatis

	float a , b ; // buat variable a dan b dengan type float
	int kode ; // buat variable kode dengan type integer

	kode = 0 : // berikan variable kode dengan nilai default 0

	menu :
	cout << "kalkulator sederhana C++ \n" ;
	cout << "UTS C++ \n\n" ;
	cout << "pilihan menu : \n" ;
	cout << "1.penjumlahan (+) \n" ;
	cout << "2.pengurangan (-) \n" ;
	cout << "3.perkalian (*) \n" ;
	cout << "4.pembagian (/) \n\n" ;
	cout << "5.perhitungan nilai UTS mahasiswa \n\n" ;
	if (kode != 0) { // perbandingan jika nilai kode tidak sama dengan 0 maka false akan tampil "kode belum di isi "
		if(kode > 5 || kode < 1) { // pengecekan kode jika melibihi batas 5 maka tidak ada 
			cout << "\nkode yang anda masukan tidak ada \nsilahkan masukan ulang kode . " ;
			system ("pause") ; // fungsi bawaan pause 
			system ("cls") ; 
			goto menu ; // kembali ke menu
		}
	else {
		if ( kode == 5) { // fungsi perbandingan jika nilai kode sama dengan 5 maka true 

			cout << "masukan nilai mahasiswa : " ; 
				cin >> a ; // fungsi input variable a
			cout << "masukan batas nilai UTS : " ;
				cin >> b ; // fungsi inpuit variable b
			if (a >= b) { // perbandingan jika a lebih besar sama dengan  b maka true
				cout << ",\nHasil penjumlahan UTS mahasiswa "<<a<<" dengan batas Nilai UTS adalah "<<b<<" maka anda : LULUS " <<endl ;
			}else if (a <= b) { // perbandingan jika a lebih kecil sama dengan  b maka true
				cout << ",\nHasil penjumlahan UTS mahasiswa "<<a<<" dengan batas Nilai UTS adalah "<<b<<" maka anda : TIDAK LULUS " <<endl ;
			}
		}else {
			cout << "masukan angka pertama : " 
				cin >> a ; // fungsi input variable a
			cout << "masukan angka kedua : " 
				cin >> b ; // fungsi input variable b
			if (kode == 1) { // fungsi perbandingan jika nilai kode sama dengan 1 maka true
				cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl; // tampilkan hasil operator tambah
			}
			if (kode == 2) { // fungsi perbandingan jika nilai kode sama dengan  maka true
				cout << "\nHasil penguranan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl; // tampilkan hasil operator kurang
			}
			if (kode == 3) { // fungsi perbandingan jika nilai kode sama dengan 3 maka true
				cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl; // tampilkan hasil operator kali
			}
			if (kode == 4) { // fungsi perbandingan jika nilai kode sama dengan 4 maka true
				cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl; // tampilkan hasil operator bagi
			}

		}
	}
}else{
	cout << "\nKode belum di isi "<< endl ;
}
return 0 ;
}