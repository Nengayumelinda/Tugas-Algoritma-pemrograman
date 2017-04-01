#include <iostream>
using namespace std ;

int x,y;
void kali(){
	int z;
	z = x*y;
	cout << "x*y = " << z << endl;
	
}
int main (){
	cout << "x : " ;
	cin>> x;
	cout << "y : " ;
	cin>> y;
	
	kali();
	
	return 0;
}
