#include <iostream>
using namespace std;
	
	int main() {
		int x;
		int n = 4 ;

		cout << n << "! = " << rekursiffaktorial (n) << endl;

	 	n = 9;
	 	cout << n << "! = " << rekursiffaktorial (n) << endl;

	 	cout << " masukkan angka yang akan di faktorialkan : ";

	 	cin >> x;

	 	cout << x <<  x <<"! = " << rekursiffaktorial (x)
	 	<< endl;

	return 0;
	}