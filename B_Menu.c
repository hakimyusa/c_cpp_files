#include <stdio.h>

main()
{
	int menu; //Declaration
	
	//Display menu choices
	printf("Our menu today: \n");
	printf("1. Fried Rice\n");
	printf("2. Fried Noodle\n");
	printf("3. Meatball\n");
	
	printf("Enter any number of menu: ");
	scanf("%d", &menu);
	
	switch (menu)
	{
		// statement executed depend on condition
		case 1: //condition 1
			printf("You choose Fried Rice"); //statement 1
		break;
		
		case 2: //condition 2
			printf("You choose Fried Noodle"); //statement 2
		break;
		
		case 3:
			printf("You choose Meetball"); //statement 3
		break;
		
		default : printf("Our Favorite menu for you"); //statement default
	}
}
