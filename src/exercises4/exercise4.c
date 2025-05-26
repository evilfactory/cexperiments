#include <stdio.h>

// Leia 10 valores inteiros e encontre o maior e o menor número armazenado no vetor.
int main()
{
	int vet[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	int biggest = vet[0];
	int smallest = vet[0];

	for (int i = 0; i < 10; i++)
	{
		if (vet[i] > biggest)
		{
			biggest = vet[i];
		}
		if (vet[i] < smallest)
		{
			smallest = vet[i];
		}
	}

	printf("biggest: %d, smallest: %d", biggest, smallest);
}