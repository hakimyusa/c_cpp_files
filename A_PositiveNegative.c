#include <stdio.h>

main()
{
	int numb;
	
	printf("Enter any number: ");
	scanf("%d", &numb);
	
	if(numb > 0) //condition 1
		printf("Your number is POSITIVE"); //statement 1
	else if(numb < 0) //condition 2
		printf("Your number is NEGATIVE"); //statement 2
	else
		printf("Your number is ZERO"); // default statement
}
