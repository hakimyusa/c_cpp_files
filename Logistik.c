#include <stdio.h>

int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int day1, day2, month1, month2, year1, year2, date1, date2;
char name[100];

void input() {
	
	printf("\nDelivery Date \n");
	printf("Day = ");
	scanf("%d", &day1 );
	
	printf("Month ( in number ) = ");
	scanf("%d", &month1 );
	
	printf("Year = ");
	scanf("%d", &year1);
	
	printf("\nReceipt Date \n");
	printf("Day = ");
	scanf("%d", &day2 );
	
	printf("Month ( in number ) = ");
	scanf("%d", &month2 );
	
	printf("Year = ");
	scanf("%d", &year2 );
	
}

int checkmonth1( month1 ) {
	int mt1 = 0;
	int i;
	
	for ( i = 0 ; i < month1 ; i++ ){
		mt1 = mt1 + month[i];
	}
	return mt1;
}

int checkmonth2( month2 ) {
	int mt2 = 0;
	int i;
	for ( i = 0 ; i < month2 ; i++ ){
		mt2 = mt2 + month[i];
	}
	return mt2;
}

int different( day1, day2, month1, month2, year1, year2 ) {
	
	int diff, leap1, leap2;
	leap1 = year1 / 4;
	leap2 = year2 / 4;
	
	date1 = year1 * 365 + leap1 + checkmonth1( month1 ) + day1;
	
	date2 = year2 * 365 + leap2 + checkmonth2( month2 ) + day2;
	
	diff = date2 - date1;
	
	return diff;
}

void output() {
	
	printf("\nItem ( Change ): %s \n", name );
	printf("Delivery Date : %d - %d - %d \n", day1, month1, year1 );
	printf("Receipt Date : %d - %d - %d \n", day2, month2, year2 );
	
	printf("\nDays Required : %d ", different( day1, day2, month1, month2, year1, year2 ));
}

main() 
{
	printf("Goods Delivery Data \n\n");
	printf("Goods Name : ");
	gets(name);
	
	input();
	output();
}
