#include <stdio.h>

//Exercício 1: Fazer um programa C para gerar todos os números que pertencem a um intervalo definido pelo usuário.
int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i);
	}
}
