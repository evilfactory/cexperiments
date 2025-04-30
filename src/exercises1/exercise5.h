#include <stdio.h>

int is_perfect(int x)
{
	int result = 0;

	for (int i = x; i > 0; i--)
	{
		if (x % i == 0 && i != x)
		{
			result = result + i;
		}
	}

	return x == result;
}

// Fazer um programa C para informar se um dado número digitado pelo usuário é um número perfeito.
// Dizemos que um número natural é perfeito se é igual à soma de todos os seus fatores(divisores), 
// excluindo ele próprio.Por exemplo, 6 e 28 são números perfeitos, 
// veja: 6 = 1 + 2 + 3 (fatores de 6: 1, 2, 3 e 6), excluímos o número 6.
int main()
{
	int x = 0;
	scanf("%d", &x);

	if (is_perfect(x))
	{
		printf(" is perfect\n");
	}
	else
	{
		printf(" is not perfect\n");
	}
}