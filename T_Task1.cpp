#include <stdio.h>

struct coord {
	int x;
	int y;
};

main (){
	
	struct coord c1, c2, c3;
	
	printf("Input X dari Koordinat Pertama : ");
	scanf("%d", &c1.x );
	printf("Input Y dari Koordinat Pertama : ");
	scanf("%d", &c1.y );
	
	printf("Input X Koordinat Kedua : ");
	scanf("%d", &c2.x );
	printf("Input Y dari Koordinat Kedua : ");
	scanf("%d", &c2.y );
	
	printf("Koordinat pertama adalah ( %d , %d ) \n", c1.x, c1.y );
	printf("Koordinat kedua adalah ( %d , %d ) \n", c2.x, c2.y );
	
	if ( c1.x < c2.x ){
		c3.x = c2.x - c1.x;
	} else {
		c3.x = c1.x - c2.x;
	}
	if ( c1.y < c2.y ){
		c3.y = c2.y - c1.y;
	} else {
		c3.y = c1.y - c2.y;
	}
	
printf("Jarak antara Koordinat Pertama dan Koordinat Kedua adalah ( %d, %d )", c3.x, c3.y );
	
}

