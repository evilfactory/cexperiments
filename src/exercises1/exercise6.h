#include <stdio.h>

// fazer um programa C para imprimir todos os n�meros perfeitos dentro de um intervalo definido pelo usu�rio.
int main()
{
	int start = 0;
	scanf("%d", &start);

	int end = 0;
	scanf("%d", &end);
	
	for (int i = start; i <= end; i++)
	{
		if (is_perfect(i))
		{
			printf("%d is perfect\n", i);
		}
	}
}