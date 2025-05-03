#include <stdio.h>

// Fazer um programa C para informar se um dado número digitado pelo usuário é um número perfeito.
// Dizemos que um número natural é perfeito se é igual à soma de todos os seus fatores(divisores), 
// excluindo ele próprio.Por exemplo, 6 e 28 são números perfeitos, 
// veja: 6 = 1 + 2 + 3 (fatores de 6: 1, 2, 3 e 6), excluímos o número 6.
int main()
{
	int x = 0;
	scanf("%d", &x);

	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			sum = sum + i;
		}
	}

	if (sum == x)
	{
		printf(" is perfect\n");
	}
	else
	{
		printf(" is not perfect\n");
	}
}