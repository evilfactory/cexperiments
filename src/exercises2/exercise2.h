#include <stdio.h>

// Exercício 2: Fazer um programa C para imprimir todos os números, dentro de um intervalo definido pelo usuário, 
// que tenham a raiz quadrada exata, ou seja, sem casas decimais.
int main()
{
	int min, max;
	printf("min: \n");
	scanf("%d", &min);
	printf("max: \n");
	scanf("%d", &max);

	for (int num = min; num <= max; num++)
	{
		for (int i = 0; i < num; i++)
		{
			if (i * i == num)
			{
				printf("%d is perfect\n", num);
				break;
			}
		}
	}
}
