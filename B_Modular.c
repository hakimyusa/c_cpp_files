#include <stdio.h>

int BJ(int k1, int k2)
{
	int totalkartu;
	
	printf("Input Kartu Pertama = ");
	scanf("%d",&k1);
	
	printf("Input Kartu Kedua = ");
	scanf("%d", &k2);
	
	totalkartu = k1 + k2;
	
	int k3;
	 
	printf("Kartu Dealer = ");
	scanf("%d", &k3);
	
	
	
	if (k1==11 && k2==11)
	{
		k1 = 1;
		totalkartu = k1 + k2;
	}
	
	else if (k1 >=11 && k2==11)
	{
		k2 = 1;
		totalkartu = k1 + k2;
	}
	
	else if (k2 >=11 && k1==11)
	{
		k1 =1;
		totalkartu = k1 + k2;
	}
	
	if ( totalkartu == 21)
	{
		printf("You got BlackJack !!! \n");	
	}
			
	if (totalkartu > 21)
	{
		printf("Bust !!! \n");
	}
	else if (k3 > totalkartu )
	{
		printf("You Lose \n");
	}
	
		
	if (k3 < totalkartu && totalkartu < 21)
	{
		printf("You Win \n");
	}
	
	else if (k3 == totalkartu)
	{
		printf("You Lose \n");
	}
	
	return totalkartu;
}

void blackjack()
{
	int k1, k2;
	
	printf("Total Kartu Anda = %d",BJ(k1,k2));
	
}

int main ()
{
	
	blackjack ();
		
	
}
