#include <stdio.h>
main ()
{
	float nilai_tugas, skor_evaluasi, softskill, total_nilai;
	
	printf("Input Nilai Tugas = ");
	scanf("%f", &nilai_tugas);
	printf("Input Nilai Skor Evaluasi = ");
	scanf("%f", &skor_evaluasi);
	printf("Masukkan Nilai Softskill = ");
	scanf("%f", &softskill);
	
	total_nilai = (nilai_tugas * 0.3) + 
		(skor_evaluasi * 0.45) +
		(softskill * 0.25);
	
	printf("\nNilai Akhir Mahasiswa = %f", total_nilai);
	
	if (total_nilai >= 60) {
		printf("\nMahasiswa dinyatakan lulus mata kuliah Matematika");
	}
	
	else {
		printf("\nMahasiswa dinyatakan tidak lulus mata kuliah Matematika");
	}
	return 0;
	
}

