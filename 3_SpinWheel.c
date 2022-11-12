#include <stdio.h>
main(){
	int uang, undian, min, i;
	
	printf("---UNDIAN TERDIRI DARI 5 HURUF---\n");
	printf("1. A\n");
	printf("2. B\n");
	printf("3. C\n");
	printf("4. D\n");
	printf("5. E\n");
	printf("---------------------------------\n\n");
	
	printf("Input uang anda (min Rp.100000) : ");
	scanf("%d",&uang);
	min=100000;
	
	if (uang<100000)
		{printf("UANG ANDA TIDAK CUKUP");}
	else
	{
	for (i=0;i<2;i++)
	{	
		printf("MASUKAN NOMOR UNDIAN : ");
		scanf("%d",&undian);
		
		if (undian==1)
			{printf("ANDA MENDAPATKAN UANG TUNAI SEBESAR Rp.50000\n\n");}
		else if (undian==2)
			{printf("ANDA MENDAPATKAN 20000 VOUCHER PULSA\n\n");}
		else if (undian==3)
			{printf("ANDA MENDAPATKAN BISKUIT KECIL\n\n");}
		else if (undian==4)
			{printf("UNDI SEKALI LAGI : ");
			scanf("%d",&undian);}
		else
			{printf("ZONK\n\n");}
	
	}
}
}


 

