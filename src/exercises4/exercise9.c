#include <stdio.h>

// Leia dois vetores com 5 elementos cada e calcule o produto escalar entre eles.
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

	int dotProduct = 0;

	for (int i = 0; i < 5; i++)
	{
		dotProduct = dotProduct + vet[0][i] * vet[1][i];
	}

	printf("Dot product = %d\n", dotProduct);
}