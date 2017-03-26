#include <stdio.h>
#include <conio.h>

int a,b;

void kali () {
	 int p;
	 p = a *b ;
	 printf("x*y  =%d" , p);
	 }

	 int main () {

	 printf("x =") ; scanf("%d" , &a) ;
	 printf("y =") ; scanf("%d" , &b) ;
	 kali () ;

	 getch() ;
	return 0 ;
}
