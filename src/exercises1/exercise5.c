#include <stdio.h>

// Fazer um programa C para informar se um dado n�mero digitado pelo usu�rio � um n�mero perfeito.
// Dizemos que um n�mero natural � perfeito se � igual � soma de todos os seus fatores(divisores), 
// excluindo ele pr�prio.Por exemplo, 6 e 28 s�o n�meros perfeitos, 
// veja: 6 = 1 + 2 + 3 (fatores de 6: 1, 2, 3 e 6), exclu�mos o n�mero 6.
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