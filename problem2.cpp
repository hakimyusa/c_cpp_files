#include <stdio.h>

main ()
{
	int A[2][3] = {{4,2,10},{8,11,6}};
	int B[2][3];
	int C[2][3];
	
	int x,y,z;

//Tranposing matrix
	for (x=0;x<2;x++)
	{
		for(y=0;y<3	;y++)
		{
			B[y][x] = A[x][y];
		}
	}
//Printing Transposed matrix	
	for (x=0;x<3;x++){
		for (y=0;y<2;y++)
		{
			printf("Transpose [%d][%d] = %d \t",x,y,B[x][y]);
		}
		printf("\n");
	}
	
//Multiplication Matrix
	
		for (x=0;x<3;x++){
		for (y=0;y<3;y++)
		{
			C[x][y] = 0;
		for (z=0;z<3;z++)
		{
			C[x][y] += A[x][z] * B[z][y];
		}
		}
		
	}
	printf("=======================================\n");
	printf("Multiplication :\n");
	
	for(x=0;x<2;x++)
	{
		for (y=0;y<2;y++)
		{
			printf("C [%d][%d] = %d \t",x,y,C[x][y]);
		}
		printf("\n");
	}
}

