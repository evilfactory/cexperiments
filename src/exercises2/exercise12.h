#include <stdio.h>

// Exercício 12: Fazer um programa C, onde dois números são amigos se a soma dos divisores
// próprios de um é igual ao outro, e vice - versa.Escreva um programa que verifique se dois
// números são amigos.
int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("number 1: ");
	scanf("%d", &num1);
	printf("number 2: ");
	scanf("%d", &num2);

	int divsum1 = 0;
	int divsum2 = 0;

	for (int i = 1; i < num1; i++)
	{
		if (num1 % i == 0)
		{
			divsum1 = divsum1 + i;
		}
	}

	for (int i = 1; i < num1; i++)
	{
		if (num2 % i == 0)
		{
			divsum2 = divsum2 + i;
		}
	}

	printf("div1 = %d, div2 = %d\n", divsum1, divsum2);

	if (num1 == divsum2 && num2 == divsum1)
	{
		printf("sao amigos :3\n");
	}
	else 
	{
		printf("nao sao amigos 3:\n");
	}
}
