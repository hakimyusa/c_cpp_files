//Program menghitung percepatan massa benda//

#include <stdio.h>
main()
{
	//variables declaration
	float F, m, a;
	
	//masukkan nilai dari variabel
	printf("Input nilai gaya (F) :");
	scanf("%f", &F);
	
	printf("Input nilai massa benda (m) :");
	scanf("%f", &m);
	
	//rumusnya
	a = F / m;
	
	//output hasil
	printf("Percepatan massa benda yang dihasilkan = %f", a);
}

