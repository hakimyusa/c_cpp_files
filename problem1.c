#include <stdio.h>
main ()
{
	int A[2][2] ={{6,10},{5,9}};
	int B[2][2] ={{17,4},{8,11}};
	int M[2][2];

	int i,j,k,C;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++)
		{
			C[i][j] = 0;
		for (k=0;k<2;k++)
		{
			M[i][j] += A[i][k] * B[k][j];
		}
		}
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++)
		{
			printf("C[%d][%d]= %d \t",i,j,M[i][j]);
		}
		printf("\n");
	}
}

