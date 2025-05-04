#include <stdio.h>

//Exercício 1: Fazer um programa C para gerar todos os números que pertencem a um intervalo definido pelo usuário.
int main()
{
	int min, max;
	printf("min: \n");
	scanf("%d", &min);
	printf("max: \n");
	scanf("%d", &max);
	
	for (int i = min; i <= max; i++)
	{
		printf("%d ", i);
	}
}
