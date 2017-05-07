#include <iostream>
using namespace std;


int main(){
	//input
	int M [3] [3];
	
	for (int i=0; i<3; i++){
	
		for (int j=0; j<3; j++){
				cout << "masukan nilan bari ke " << i << " masukan nilai kolom ke " << j << ":" ;
			cin >> M [i] [j];
		}
	}
	//output
	for (int i=0; i<3; i++){
	
		for (int j=0; j<3; j++){
				cout << "tampilkan nilan bari ke " << i << " tampilkan nilai kolom ke " << j << ":" ;
			cout << M [i] [j] <<endl;
		}
	}

	
	return 0;
}
