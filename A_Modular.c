#include <stdio.h>
#include <math.h>

void prosesplusmin ()
{
	int i;
	char tanda[5];
	int jumlah;
	
	jumlah = 1;
	
	do 
	{
	
	for (i=2;i<=9;i++)
	{
	printf("Input Operasi Bilangan (+ / -) = ");
	scanf("%s",tanda);
	
	printf("%d %s %d", jumlah,tanda,i);	
	
		if (strcmp(tanda, "+")== 0)
	{
		jumlah = jumlah + i;
	}
	
	else if (strcmp(tanda, "-")== 0)
	{
		jumlah = jumlah - i;
	}
	
	
	
	printf("= %d \n", jumlah);
	
	if(jumlah >= 100){
			printf("Total Seluruhnya = %d \n",jumlah);
			break;
		}
	}
	
	}while (jumlah <=100);
	
}

int main ()
{
	prosesplusmin();
}
