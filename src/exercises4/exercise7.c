#include <stdio.h>

// Leia dois vetores de 5 posições cada e mostre os valores que aparecem em ambos.
int main()
{
	int vet[2][5];

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("Digite o valor %d: ", i);
			scanf("%d", &vet[j][i]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) 
		{
			if (vet[0][i] == vet[1][j])
			{
				printf("vet[0][%d] == vet[1][%d]\n", i, j);
			}
		}
	}
}