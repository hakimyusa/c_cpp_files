#include <stdio.h>

void main () {
	
	int a,b ;
	printf ("Input Nilai A :") ;
	scanf ("%d",&a) ;
	printf ("Input Nilai B :") ;
	scanf ("%d",&b) ;
	tukar (a,b) ;
	printf("\n============================================================\n");
	printf ( "Berikut nilai dari variabel A=%d dan B=%d sebelum ditukar",a,b) ;
	printf("\n============================================================\n");
	printf ("Setelah di tukar A=%d dan B=%d",a,b) ;
	printf("\n============================================================\n");
}
void tukar () {
	int temp,x,y ;
	temp=x ;
	x=y ;
	y=temp ;
}


