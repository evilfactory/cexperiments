#include <stdio.h>

// Exercício 10: Fazer um programa que leia N números inteiros e exiba o maior e o menor entre
// eles.
int main()
{
	int min, max = 0;

	while (1)
	{
		int number;
		printf("Type a number:\n");
		scanf("%d", &number);

		if (number > max)
		{
			max = number;
		}
		if (number < min)
		{
			min = number;
		}

		char option;
		printf("Do you wish to continue? y/n");
		scanf(" %c", &option);
		if (option != 'y')
		{
			break;
		}
	}

	printf("min = %d, max = %d", min, max);
}
