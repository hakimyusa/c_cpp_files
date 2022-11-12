#include <stdio.h>
main()
{
	float nilai_tugas;
	float nilai_evaluasi;
	float nilai_softskill;
	float persentase_tugas = 30;
	float persentase_evaluasi = 45;
	float persentase_softskill = 25;
	float nilai_akhir;

	//input (nilai_tugas)
	printf("Input Nilai Tugas = ");
	scanf("%f", &nilai_tugas );

	//input (nilai_evaluasi)
	printf("Input Nilai Evaluasi = ");
	scanf("%f", &nilai_evaluasi );

	//input (nilai_softskill)
	printf("Input Nilai Softskill= ");
	scanf("%f", &nilai_softskill );

	//proses (nilai_akhir)
	nilai_akhir = (nilai_tugas * persentase_tugas / 100) +
		(nilai_evaluasi * persentase_evaluasi / 100) +
		(nilai_softskill * persentase_softskill / 100);

	//output (hasil nilai_akhir)
	printf("Hasil Nilai Akhir Mahasiswa = %f", nilai_akhir);
}
