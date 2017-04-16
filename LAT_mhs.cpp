#include <iostream>
using namespace std;


typedef struct{
	string NIM;
	string NAMA;
	string IPK;
}mahasiswa;

int main(){
	int N;
	cout << "MASUKAN JUMLAH DATA :" ;
	cin >> N;
	
	mahasiswa mhs[N];
	for (int i=0; i < N; ++i){
		cout << "MASUKAN NIM KE "<< i+1 <<"	:" ;
		cin>> mhs[i].NIM;
		cout << "MASUKAN NAMA KE "<< i+1 <<"	:" ;
		cin>> mhs[i].NAMA;
		cout << "MASUKAN IPK KE "<< i+1 <<"	:" ;
		cin>> mhs[i].IPK;
	}
	cout << "================================================" << endl;
	cout << "|	NIM	|	NAMA	|	IPK	|" << endl;
	cout << "================================================" << endl;
	
	for (int i =0; i < N; ++i){
		cout << "|	" << mhs[i].NIM ;
		cout << "	|	" << mhs[i].NAMA;
		cout << "	|	" << mhs[i].IPK;
		cout << "	|	" <<endl;
		
	}
	cout << "================================================" << endl;
	
	return 0;
}
