//*Program_Simple_Calculator_if_else*//
#include<stdio.h>

main()
{
	//declaration variable
	int bil1, bil2, cal; 
	char op; 
	
	//input
	printf("Masukkanlah angka pertama : ");
	scanf("%i", &bil1); 

	printf("Masukkanlah angka kedua : ");
	scanf("%i", &bil2); 

	printf("Memilih jenis operator bilangan : +  | - | / | * \n");
	scanf(" %c", &op); 

	 //process and output
	if (op == '+')
	{
		cal = bil1 + bil2;
		printf("Hasil Penjumlahan: %i", cal);
	}

	else if (op == '-')
	{
		cal = bil1 - bil2;
		printf("Hasil Pengurangan: %i", cal);
	}

	else if (op == '/')
	{
		cal = bil1 / bil2;
		printf("Hasil Pembagian: %i", cal);
	}

	else if (op == '*')
	{
		cal = bil1 * bil2;
		printf("Hasil perkalian: %i", cal);
	}

	else
	{
		printf("Invalid Input");
	}

}
