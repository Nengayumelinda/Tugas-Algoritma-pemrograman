#include <iostream>
using namespace std;

int main(){
	int M [3] [3];
	int M1 [3] [3];
	int M2 [3] [3];
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			
			cout << "masukan nilai baris M1 ke " << i << " masukan nilai kolom M1 ke " << j << ":" ;
			cin >> M1 [i] [j];
		
		}
	}
	
		for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			
			cout << "masukan nilai baris M2 ke " << i << " masukan nilai kolom M2 ke " << j << ":" ;
			cin >> M2 [i] [j];
		}
	}
	cout << endl;
		cout << "hasil dari pertambahan = " << endl;
		
	for (int i=0; i<3; i++){
		cout << endl;
		
		cout << "________________________________"	<< endl;	
		
		for (int j=0; j<3; j++){
		
			M [i] [j] = M1 [i] [j] + M2 [i] [j];
		
		  cout <<"\t" << M [i] [j];
		
		}
		cout << endl;
		cout << "________________________________" ;
	}
	return 0;
}
