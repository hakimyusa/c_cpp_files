#include <stdio.h>

main ()
{
	int numb, sum_odd;
	
	/*initialization*/
	sum_odd = 0;
	printf("Input an integer = ");
	scanf("%d", &numb);
	
	while(numb!=0) //condition
	{
		/*block statement of loop*/
		if(numb%2!=0) {
			sum_odd = sum_odd + numb;
			printf("The odd number you entered is %d \n", numb);
		}
		printf("Input an integer = ");
		scanf("%d", &numb);
	}
	printf("The sum of all odd numbers entered is %d", sum_odd);
}
