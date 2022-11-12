#include <stdio.h>
#include <math.h>
typedef struct coordinat 
{
	int x, y;
};

main ()
{
	struct coordinat c1,c2;
	float jarak;
	
	printf("Input Koordinat X Pertama : ");
	scanf("%d", &c1.x);
	printf("Input Koordinat Y Pertama : ");
	scanf("%d", &c1.y);
	printf("Input Koordinat X Kedua : ");
	scanf("%d", &c2.x);
	printf("Input Koordinat Y Kedua : ");
	scanf("%d", &c2.y);
	
	jarak = sqrt ((c2.x-c1.x)*(c2.x-c1.x) + (c2.y-c1.y)*(c2.y-c1.y));
	
	printf("Selisih antara dua Koordinat adalah :  (%.2f)",jarak);
}
