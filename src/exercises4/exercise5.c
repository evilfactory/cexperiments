#include <stdio.h>

// Leia 10 números e armazene em um vetor. Em seguida, crie outro vetor com os mesmos elementos, mas na ordem inversa.
int main()
{
	int vet[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	int revVet[10];

	for (int i = 0; i < 10; i++)
	{
		revVet[i] = vet[9 - i];
	}
}