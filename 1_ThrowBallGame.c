#include <stdio.h>
main(){
	int skor, i, T_skor;
	T_skor=0;	

	printf("Score Target\n");
	printf("1. Skor 1\n");
	printf("2. Skor 2\n");
	printf("3. Skor 3\n");	
	printf("4. Skor 4\n");	
	printf("5. Skor 5\n");	
	printf("6. Skor 6\n");
	printf("7. Skor 7\n");
	printf("8. Skor 8\n");
	printf("9. Skor 9\n");
	printf(" Bola Tidak Mengenai Target\n\n");


	for (i=1;i<=9;i++)
	{
		printf("Bola mengenai target dengan skor : ");
		scanf("%d",&skor);
		
		if (skor==1)
		{printf("skor yang diraih 1\n");
		T_skor=T_skor+1;}
		else if (skor==2)
		{printf("skor yang diraih 2\n");
		T_skor=T_skor+2;}
		else if (skor==3)
		{printf("skor yang diraih 3\n");
		T_skor=T_skor+3;}
		else if (skor==4)
		{printf("skor yang diraih 4\n");
		T_skor=T_skor+4;}
		else if (skor==5)
		{printf("skor yang diraih 5\n");
		T_skor=T_skor+5;}
		else if (skor==6)
		{printf("skor yang diraih 6\n");
		T_skor=T_skor+6;}
		else if (skor==7)
		{printf("skor yang diraih 7\n");
		T_skor=T_skor+7;}
		else if (skor==8)
		{printf("skor yang diraih 8\n");
		T_skor=T_skor+8;}
		else if (skor==9)
		{printf("skor yang diraih 9\n");
		T_skor=T_skor+9;}
		else
		{printf("Bola Tidak Mengenai Target\n");
		T_skor=T_skor+0;}
	}
	printf("total skor yang anda dapatkan adalah %d",T_skor);
}


