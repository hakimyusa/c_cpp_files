#include <stdio.h>
int main ()
{
	//declaration variable
	int harga, diskon, total_harga;
	
	//input
	printf("Input harga barang = ");
	scanf("%d", &harga);


	//process
	if (harga>=300000) {
		diskon = harga*0.05;
		total_harga = harga-diskon;
	
		//output	
		printf("\nAnda mendapatkan diskon sebesar \t=5 persen atau (%d Rupiah)", diskon);
		printf("\nHarga barang - diskon \t=%d-", harga);
		printf("%d", diskon);
		printf("\n\nTotal Harga =%d\n", total_harga);
	}
	//process
	else {
		total_harga = harga;
		
		//output
		printf("Tidak mendapatkan diskon\n");
		printf("\nHarga barang yang harus di bayar = %d\n\n", total_harga);
		
	}
}

