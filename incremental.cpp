#include <iostream>
using namespace std;

int main() {
	const int MAX = 3;
	int var [MAX] = {10 , 100, 200};
	 int *ptr;

	 //alamat array ke pointer
	 ptr = var;

	 for (int i = 0; 1 < MAX; i++) {
	 	cout << " Address of var [" << 1 <<"] = ";
	 	cout << ptr << endl;

	 	cout << "Value of var [" << 1 << "] = ";
	 	cout << ptr << endl;

	 	//menunjuk ke memory selanjutnya
	 	ptr++;
	 }

	
return 0;
}