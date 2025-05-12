#include <stdio.h>

// fazer um programa C para imprimir todos os números perfeitos dentro de um intervalo definido pelo usuário.
int main()
{
	int start = 0;
	printf("start: \n");
	scanf("%d", &start);
	int end = 0;
	printf("end: \n");
	scanf("%d", &end);
	
	for (int num = start; num <= end; num++)
	{
		int sum = 0;
		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
			{
				sum = sum + i;
			}
		}

		if (sum == num)
		{
			printf("%d is perfect\n", num);
		}
	}
}