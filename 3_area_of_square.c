/*PROGRAM Area_of_Square*/
/*Program for calculating the area of square*/

#include <stdio.h>
main ()
{
	//variables declaration
	int side, area;
	
	//Enter the side
	printf("Enter the side : ");
	scanf("%d", &side);
	
	//calculating the area
	area = side * side;
	
	//display the result on the screen
	printf("The area of Square = %d", area);
}
