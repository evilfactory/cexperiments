#include <stdio.h>

// Exercício 13: Fazer um programa que leia dois números inteiros, mostre o maior e a diferença
// entre eles.
int main()
{
	int x, y;
	printf("number 1: ");
	scanf("%d", &x);
	printf("number 2: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("max = %d\n", x);
		printf("diff = %d", x - y);
	}
	else
	{
		printf("max = %d\n", y);
		printf("diff = %d", y - x);
	}
}