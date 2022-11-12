//Program menghitung gaya newton//

#include <stdio.h>
main()
{
	//variables declaration
	float m, a, F;
	
	//masukkan nilai dari variabel 
	printf("Input Nilai massa benda (m) :");
	scanf("%f", &m);
	
	printf("Input Nilai percepatan massa benda (a) :");
	scanf("%f", &a);
	
	//rumusnya
	F = m * a;
	
	//output hasil
	printf("Gaya yang dihasilkan = %f", F);
}

