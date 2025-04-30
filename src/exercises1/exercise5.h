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

// Fazer um programa C para informar se um dado n�mero digitado pelo usu�rio � um n�mero perfeito.
// Dizemos que um n�mero natural � perfeito se � igual � soma de todos os seus fatores(divisores), 
// excluindo ele pr�prio.Por exemplo, 6 e 28 s�o n�meros perfeitos, 
// veja: 6 = 1 + 2 + 3 (fatores de 6: 1, 2, 3 e 6), exclu�mos o n�mero 6.
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