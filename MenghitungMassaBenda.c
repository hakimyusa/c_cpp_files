//Program menghitung massa benda//

#include <stdio.h>
main()
{
	//variables declaration
	float F, a, m;
	
	//masukkan nilai dari variabel
	printf("Input nilai gaya (F) :");
	scanf("%f", &F);
	
	printf("Input nilai percepatan massa benda (a) :");
	scanf("%f", &a);
	
	//rumusnya
	m = F / a;
	
	//output hasil
	printf("Massa benda yang dihasilkan = %f", m);
}  

