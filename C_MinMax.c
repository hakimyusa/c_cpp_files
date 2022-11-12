#include <stdio.h>

main ()
{
	typedef float score [100];
	score data;
	
	int i, n;
	
	printf("Input Jumlah Data : ");
	scanf("%d", &n);
	
	for (i=0;i<n;i++)
	{
		printf("Data Ke %d : ",i);
		scanf("%f",&data[i]);
	}
	
	int Max = data[0];
	int Min = data[0];
	
	for(i=0;i<n;i++)
	{
		if (Max < data[i])
		{
			Max = data[i];
		}
		
		if (Min > data[i])
		{
			Min = data[i];
		}
	}		
	printf("\nMax = %d \n",Max);
	printf("Min = %d \n",Min);

}
