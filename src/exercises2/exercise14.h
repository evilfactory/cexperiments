#include <stdio.h>

// Exerc�cio 14: Fazer um programa que leia dois n�meros inteiros A e B e conte quantos n�meros
// �mpares existem entre eles.
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

