#include <stdio.h>

//Exerc�cio 1: Fazer um programa C para gerar todos os n�meros que pertencem a um intervalo definido pelo usu�rio.
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
