#include <iostream>
using namespace std;

int main(){
	int angka, jumlah, max, min;
	
	
	cout << "mencari nilai max dan min  "<<endl;
	cout << endl;
	cout << "masukan jumlah angka :" ;
	cin >> jumlah;
	cout << endl;
	for (int i =1; i <= jumlah; i++){
		cout << "masukan angka : ";
		cin >> angka ;
		if(i == 1){
			min = angka;
			max = angka;
		}
		else if(max > angka){
			max= angka;
		}
		else if(min < angka){
			min= angka;
		}
		else{}
	}
	cout << endl;
		cout << "nilai terbesar :"<< min <<endl;
		cout << "nilai terkecil :"<< max << endl;
return 0 ; 
}
