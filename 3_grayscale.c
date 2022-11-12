#include <stdio.h>
void toGray ( ) {
       int r, g, b ;
       float grayscale ;
       printf ("Input Nilai R : ") ;
       scanf ("%d",&r) ;
       printf ("Input Nilai G : ") ;
       scanf ("%d",&g) ;
       printf ("Input Nilai B : ") ;
       scanf ("%d",&b) ;

      grayscale=(0.3 * r) + (0.59 * g) + (0.11 * b) ;
      printf("==========================\n");
      printf ("Hasil Grayscale :%.2f \n", grayscale ) ;
      printf("==========================\n");
      
  }
  
  main(){
  	toGray();
  	
  }
