#include <stdio.h>

int main() {
	int x,y,z,prima = 0,nim = 9,i = 2;
	
	while(prima == 0) {
		printf("\n%s","Input Bilangan Prima :  ");
		scanf("%d",&x);
		
		for (; i <= x; i++)
		{
			if (x % i  == 0 && x != 2) {
				printf("%s \n", "Ini Bukan Bilangan Prima");
				break;
				} else {
					 for (z = 1; z <= x; z++)
					 {
					 	for (y = 1; y <= x; y++)
					 	{
					 		printf(" %d ",x);
					 		}
					 		printf("\n%s","");
					 		}
					 		printf("%s\n","Nama : Hakim Anugrah");
					 		printf("\n%s %d\n", " Digit Terakhir NIM + Bilangan Prima = ",nim + x);
					 		prima = 1;
					 		break;
					 	}
					 }
				}
				printf("\n %s \n", "Selesai");
				return 0;
			}
