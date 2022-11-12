//*Program Day name in a week (using switch-case)*/
#include <stdio.h>

int main()
{
    //declaration variable
	int day;
    
	//input week day number by user
    printf("Enter week day number (1-7): ");
    scanf("%d", &day);

	//process and output
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Sorry! Please enter week day number between 1-7..");
    }

    return 0;
}

