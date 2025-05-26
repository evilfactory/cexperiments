#include <stdio.h>

// Leia um vetor de 10 posições e rotacione seus elementos uma posição para a direita. O último elemento deve passar para a primeira posição.
int main()
{
	int vet[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	int dVet[10];

	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			dVet[0] = vet[i];
		}
		else 
		{
			dVet[i + 1] = vet[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d:%d\n", i, dVet[i]);
	}
}