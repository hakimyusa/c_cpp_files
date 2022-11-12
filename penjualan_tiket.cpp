#include<stdio.h>

main()
{
	int d, a, c, e, orang, hd, ha, he, hc, htl, ac;
	
	printf("Daftar Harga Tiket !\n");
	printf("-------------------------\n");
	printf("Tiket Dewasa 	: 25000\n");
	printf("Tiket Anak Anak : 15000\n");
	printf("------------------------\n");
	
	printf("Tiket Untuk orang dewasa yang mau dibeli : ");
	scanf("%d", &d);
	printf("Tiket Untuk anak anak yang mau dibeli : ");
	scanf("%d", &a);
	
	orang=0;
	htl=0;
	orang=d+a;
	hd=d*25000;
	ha=a*15000;
	htl=hd+ha;
	
	do
	{
		if(orang<10)
		{
			printf("tiket tambahan dewasa atau anak kecil ? ( 1 = dewasa dan 2 = anak kecil) = ");
			scanf("%d", &ac);
			if (ac == 1)
			{
				printf("Tiket tambahan  untuk orang dewasa : ");
				scanf("%d", &c);
				hc=c*25000;
				htl=htl+hc;
				orang=orang+c;
			}
			else if(ac == 2)
			{
				printf("Tiket tambahan  untuk anak anak : ");
				scanf("%d", &e);
				hc=c*15000;
				htl=htl+he;
				orang=orang+e;
			}
			else
			{
				printf("Maaf kursi sudah penuh\n");
			}
		}
		else
		{
			printf ("Tidak ada tambahan orang \n");
		}
	}while (orang<10);
	
	printf ("jumlah pas dan gerbong ditutup karena \n");
	printf ("Jumlah orang mencapai batas maksimal dan penjualan tiket sudah mencapai %d", htl);
}
