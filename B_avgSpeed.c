#include <stdio.h>

typedef struct waktu{
	int jam;
	int menit;
	int detik;
};
main ()
{
	struct waktu j1,j2,m1,m2,d1,d2;
	
	float selisih, tw1, tw2;
	float jarak,kecepatan;
	
	printf("Jam Keberangkatan");
	printf("\n\nInput Jam 1 : ");
	scanf("%d",&j1.jam);
	
	printf("\nInput Menit 1 : ");
	scanf("%d",&m1.menit);
	
	printf("\nInput Detik 1 : ");
	scanf("%d",&d1.detik);
	
	printf("\n\nJam Kedatangan");
	printf("\n\nInput Jam 2 : ");
	scanf("%d",&j2.jam);
	
	printf("\nInput Menit 2 :  ");
	scanf("%d",&m2.menit);
	
	printf("\nInput Detik 2 : ");
	scanf("%d",&d2.detik);
	
	tw1 = j1.jam * 3600 + m1.menit * 60 + d1.detik;
	tw2 = j2.jam * 3600 + m1.menit * 60 + d2.detik; 
	selisih = (tw2 - tw1)/3600;
	
	printf("\n\nInput Jarak Tempuh Taxi :  ");
	scanf("%f",&jarak);	
	kecepatan = jarak / selisih;
	
	printf("\nJarak Tempuh Taxi = %.2f",jarak);
	printf("\nJam Keberangkatan = (%d)Jam (%d)Menit (%d)Detik",j1.jam, m1.menit, d1.detik);
	printf("\nJam Kedatangan = (%d)Jam (%d)Menit (%d)Detik",j2.jam, m2.menit, d2.detik);
	printf("\nPerbedaan Waktu = (%.2f) Jam",selisih);
	printf("\nKecepatan taxi (%.2f) M/s",kecepatan);
}
