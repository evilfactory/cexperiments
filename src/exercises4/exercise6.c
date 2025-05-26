#include <stdio.h>

// Leia 20 números e conte quantos são pares e quantos são ímpares.
int main()
{
	int vet[20];

	for (int i = 0; i < 20; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	int pairs = 0;
	int odds = 0;

	for (int i = 0; i < 20; i++)
	{
		if (vet[i] % 2 == 0)
		{
			pairs++;
		}
		else
		{
			odds++;
		}
	}

	printf("pairs = %d, odds = %d", pairs, odds);
}