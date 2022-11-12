//*Program Day name in a week (using if-else)*/
#include <stdio.h>

int main()
{
    int day;

    //input week day number by user
    printf("Enter week day number (1-7): ");
    scanf("%d", &day);

    if(day == 1)
        printf("Monday");
    else if(day == 2)
        printf("Tuesday");
    else if(day == 3)
        printf("Wednesday");
    else if(day == 4)
        printf("Thursday");
    else if(day == 5)
        printf("Friday");
    else if(day == 6)
        printf("Saturday");
    else if(day == 7)
        printf("Sunday");
    else
        printf("Sorry! Please enter week day number between 1-7.");
        
    return 0;
}
