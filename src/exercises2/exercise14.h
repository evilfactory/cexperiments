#include <stdio.h>

// Exercício 14: Fazer um programa que leia dois números inteiros A e B e conte quantos números
// ímpares existem entre eles.
int main()
{
	int x, y;
	printf("min: ");
	scanf("%d", &x);
	printf("max: ");
	scanf("%d", &y);

	for (int i = x; i < y; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d impar\n", i);
		}
	}
}

