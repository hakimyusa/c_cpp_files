/*PROGRAM Area_of_Rectangle*/
/*Program for calculating the area of rectangle*/

#include <stdio.h>
main ()
{
	//variables declaration
	int length, width, area;
	
	//Fill the length and width
	printf("Input Nilai Panjang : ");
	scanf("%d", &length);
	
	printf("Input Nilai Lebar : ");
	scanf("%d", &width);
	
	//calculating the area
	area = length * width;
	
	//display the result on the screen
	printf("Luas Persegi Panjang adalah = %d", area);
	
}
