int main ()
{
	// variabel
	int Panjang, Lebar, Luas;
	
	// input sisi persegi panjang
	printf("Masukkan Panjang : ");
	scanf("%d", &Panjang);
	printf("Masukkan Lebar : ");
	scanf("%d", &Lebar);
	
	//luas persegi panjang
	Luas = Panjang * Lebar;
	printf ("Luas Persegi Panjang = %d", Luas);
	return 0;
}
