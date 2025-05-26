#include <stdio.h>

// Leia 10 números e armazene em um vetor. Calcule e exiba a soma de todos os elementos.
int main()
{
	int vet[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum = sum + vet[i];
	}

	printf("sum: %d", sum);
}