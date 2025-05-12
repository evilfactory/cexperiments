#include <stdio.h>

int is_prime(int x)
{
	if (x == 1) { return 0; }

	int isPrime = 1;
	for (int i = x; i > 0; i--)
	{
		if (x % i == 0 && i != 1 && i != x)
		{
			isPrime = 0;
		}
	}

	return isPrime;
}

// Fazer um programa C para encontrar todos os números primos dentro de um intervalo definido pelo usuário. 
// O usuário informa o inicio e o fim. Com base nisto, deve-se achar todos os primos ali existentes e 
// imprimi-los na tela.
int main()
{
	int start = 0;
	int end = 0;
	printf("start: \n");
	scanf("%d", &start);
	printf("end: \n");
	scanf("%d", &end);

	for (int num = start; num <= end; num++)
	{
		int isPrime = 1;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				isPrime = 0;
			}
		}
		if (isPrime)
		{
			printf("%d is prime\n", num);
		}
	}
}