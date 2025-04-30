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
	scanf("%d", &start);
	scanf("%d", &end);

	for (int i = start; i <= end; i++)
	{
		if (is_prime(i))
		{
			printf("%d is prime\n", i);
		}
	}
}