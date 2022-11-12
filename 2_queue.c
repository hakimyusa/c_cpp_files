#include <stdio.h>
#include <conio.h>

int main(){
	create(&Q);
	int input;
	char data[50];
	printf("PROGRAM ANTRIAN PASIEN\n");
	printf("[1] Tambah Pasien\n");
	printf("[2] Panggil Pasien\n");
	printf("[3] Tampil Daftar Antrian\n");
	printf("[4] Keluar\n");
		do{
		printf("\nMasukkan Pilihan : "); scanf("%d", &input);
		if(input == 1){
			printf("Masukkan nama : "), scanf("%s", &data);
				enqueue(&Q, data);
			}else if(input == 2){
				dequeue(&Q);
			}else if(input == 3){
				Tampil(Q);
			}else if(input == 4){
				goto end;
			}else{
				printf("Pilihan Salah!");
			}
		}while(input != 5);
end:
return 0;
}

