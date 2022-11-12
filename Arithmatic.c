/*Program calculate_the_lenght_of_the_rope_before_cutting*/
#include <stdio.h>
int main()
{
	//variable declaration
	float a, n, Un, Sn;

	//input beberapa masukan
	printf("Input Banyak Potongan pada Tali =");
	scanf("%f", &n);
	printf("Input Panjang Potongan Terpendek pada Tali =");
	scanf("%f", &a);
	printf("Input Panjang Potongan Terpanjang pada Tali =");
	scanf("%f", &Un);

	//rumus menentukan jumlah panjang tali sebelum di potong
	Sn = n / 2 * (a + Un);

	//output display on the screen
	printf("Jumlah Panjang Tali Sebelum dipotong Adalah = %f", Sn);
}

