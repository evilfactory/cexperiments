#include <stdio.h>

//Exerc�cio 1: Fazer um programa C para gerar todos os n�meros que pertencem a um intervalo definido pelo usu�rio.
int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i);
	}
}
