#include <stdio.h>
void main ( ) {
	
       int kotak,i,j;
       printf("====================================\n");
       printf("Program Membuat Persegi dari Bintang\n") ;
       printf("====================================\n");
       printf("Input Ukuran (input berupa angka):") ;
       scanf(" %d",&kotak) ;
       for(i=0;i<kotak;i ++ ) {

               for (j=0;j< kotak;j++) {
                       printf ("*") ;
               }
               printf ("\n") ;
               
        }
        
    }
    
    
