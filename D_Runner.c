#include <stdio.h>

main ()
{
	typedef float Speed [100];
	Speed data;
	int i, n;
	
	float average, jumlah;
	float min, max, total;

	
	printf("Input Jumlah Data : ");
	scanf("%d", &n);
	
	for (i=0;i<n;i++)
	{
		printf("Data Ke %d : ",i);
		scanf("%f",&data[i]);
	}
	
	max = data[0];
	min = data[0];
	
	for (i=0;i<n;i++)
	{
		if (max < data[i])
		{
			max = data[i];
		}
		
		if (min > data[i])
		{
			min = data[i];
		}
	}
	total = max - min;
	
	for (i=0;i<n;i++)
	{
		jumlah = jumlah + data[i];
	}
	average = jumlah / n;
	
	printf("\nRata-rata Kecepatan : %.2f ",average);
	printf("\nMax : (%.2f) ",max);
	printf("\nMin : (%.2f) ",min);
	printf("\nJarak Max dan Min : %.2f ", total);

}
