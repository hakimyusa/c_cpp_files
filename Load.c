#include <stdio.h>

float weight, weightkg;
int conv, type;

float kilogram( float weight ) {
	
	float weight2;
	weight2 = weight * 2.20462;
	
	return weight2;
	
}

float quintals( float weight ) {
	
	float weight2;
	weight2 = weight * 220.462;
	
	return weight2;
	
}

void input() {
	
	printf("Automatic Weight Box Loaders \n");
	printf("Press 1 to do 'To Pounds' Convertion or Press 2 to Input the Box Weight ( In Pounds ): ");
	scanf("%d", &conv );
	
	do {
	if ( conv == 1 ) {
		printf("Weight Type : \n");
		printf("1. Kilogram \n");
		printf("2. Quintal \n");
	
		do {
		printf("Input the Number of Weight type : ");
		scanf("%d", &type );
		
		if ( type == 1 ) {
			printf("Input Box Weight : ");
			scanf("%f", &weight);
					
			weight = kilogram( weight );
		}
		else if ( type == 2 ) {
			printf("Input Box Weight : ");
			scanf("%f", &weight);
					
			weight = quintals( weight );
		}
		else {
			printf("Please Input Correct Number \n");
		}
		} while ( type > 2 );
	}
	
	else if ( conv == 2 ) {
		printf("Input Box Weight : ");
		scanf("%f", &weight );
	}
	else {
		printf("Please Input Correct Number \n");
	}
	} while ( conv < 1 || conv > 2 );
	
}

void output() {
	
	printf("\nBox Weight is %.2f Pounds \n", weight );
	printf("Truck Load Rules : \n");
	printf("1. Truck A Load : Over 1.1 Quintals \n");
	printf("2. Truck B Load : From 49.5 Kg to Less than 1,1 Quintals \n");
	printf("3. Truck C Load : Less than 49.5 Kg \n");
	
}

void outputCheck () {
	
	weightkg = weight / 2.20462;
	
	if ( weightkg > 110 ) {
		printf("Box weight ( %.2f Pounds / %.2f Kg ) is Over than 1.1 Quintals \n", weight, weightkg);
		printf("Box will be Loaded to Truck A \n");
	}
	else if ( 110 > weightkg > 49.5 ) {
		printf("Box weight ( %.2f Pounds / %.2f Kg ) is Over than 49.5 Kg and Less than 1.1 Quintals \n", weight, weightkg);
		printf("Box will be Loaded to Truck B \n");
	}
	else {
		printf("Box weight ( %.2f Pounds / %.2f Kg ) is Less than 49.5 Kg \n", weight, weightkg);
		printf("Box will be Loaded to Truck C \n");
	}
	
}

main() 
{
	
	input();
	
	output();

	outputCheck();
	
}


