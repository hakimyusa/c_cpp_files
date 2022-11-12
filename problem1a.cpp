#include <stdio.h>

main ()
{
	int x, y, z;	
	
	int A[3][3]= {{12,10,35},{25,9,13}, {6,17,22}};
	int B[3][3]= {{11, 12, 5},{7,8,25},{14,10,15}};
	
	int C[3][3];
	
	
	for (x=0;x<3;x++){
		for (y=0;y<3;y++)
		{
			C[x][y] = A[x][y] - B[x][y];
			printf("C[%d][%d] = %d \t",x,y,C[x][y]);
		}
		printf("\n\n");
	}

	return 0;	
	
}	



