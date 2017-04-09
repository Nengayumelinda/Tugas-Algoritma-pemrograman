#include <iostream>
using namespace std;

int main(){
int y = 0;
string array[10];
cout <<"Masukan Elemen Array : " << endl;
for (int z = 0; z<10; z++){
	cout << "Elemen" << z+1 <<"=";
	cin >> array[z];
	
}
	cout << "Tiap Tiap Elemen" << endl;
	for (int z = 0; z<10; z++){
		if(array[z]== "A"){
			y++;
		}
		cout <<"Elemen" << z+1 << "=" << array[z] << endl;
		
	}
	cout << "jumlah kemunculan elemen A = " << y;
	return 0;
}
