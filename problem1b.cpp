#include <stdio.h>
main ()
{
int A[2][2] ={{6,10},{5,9}};
int B[2][2] ={{17,4},{8,11}};
int C[2][2];
int x,y,z;
for (x=0;x<2;x++){
for (y=0;y<2;y++)
{
for (z=0;z<2;z++)
{
C[x][y] += A[x][z] * B[z][y];
}
}
}
for (x=0;x<2;x++){
for (y=0;y<2;y++)
{
printf("C[%d][%d]= %d \t",x,y,C[x][y]);
}
printf("\n");
}
}

