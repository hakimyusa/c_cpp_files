#include <stdio.h>
void main ( ) {

  double i, j, x ;
  printf ("Input Angka Pertama : ") ;
  scanf ("%lf",&i) ;
  printf ("Input Angka Kedua : ") ;
  scanf ("%lf",&j);
  
  x = i ;
  i = j ;
  j = x ;
  
  printf("===================\n");
  printf ("Setelah ditukar :\n") ;
  printf("===================\n");
  printf ("Nilai dari Input Angka Pertama : % .lf\n" , i ) ;
  printf ("Nilai dari Input Angka Kedua : % .lf" , j ) ;
       return 0 ;
    
}
