#include <stdio.h>

// Leia 10 números (permitindo repetições) e crie um novo vetor apenas com os valores distintos.
int main()
{
	int vet[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	int uniqueVet[10];
	int start = 0;

	for (int i = 0; i < 10; i++)
	{
		int unique = 1;
		for (int j = 0; j < 10; j++)
		{
			if (uniqueVet[j] == vet[i])
			{
				unique = 0;
			}
		}

		if (unique)
		{
			uniqueVet[start] = vet[i];
			start++;
		}
	}

	for (int i = 0; i < start; i++)
	{
		printf("%d: %d\n", i, uniqueVet[i]);
	}
}