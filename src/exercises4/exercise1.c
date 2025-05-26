#include <stdio.h>

// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Em seguida, imprima o vetor.
int main()
{
	int vet[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor %d: ", i);
		scanf("%d", &vet[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("Posicao %d = %d\n", i, vet[i]);

	}
}