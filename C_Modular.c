#include <stdio.h>
#include <math.h>

void pengecekan (int i)
{
	int cek;
	cek = i % 7;
	if (cek ==0 || i==17 || i==27 || i == 37 || i==47)
	printf("-- \n");
	else 
	printf("%d \n", i);
}

int main ()
{
	int i;
	
	for (i=1;i<=50;i++)
	{
		pengecekan (i);
	}
}
