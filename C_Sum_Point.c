#include <stdio.h>

main ()
{
	int numb, sum_point;
	
	/*initialization*/
	sum_point = 0;
	do { //do statement
		/*black loop statement*/
		printf("Input an integer = ");
		scanf("%d", &numb);
		sum_point+=1;
	} while (numb%2==0 && numb%3==0); //condition
	
	printf("Last number is incorrect\n");
	printf("Total point is %d", sum_point);
}
