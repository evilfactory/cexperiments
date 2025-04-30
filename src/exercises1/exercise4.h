#include <stdio.h>

// Fazer um programa C para informar se um número digitado pelo usuário pode ser representado pelo 
// produto de 2 números primos.
int main()
{
	int num;
	scanf("%d", &num);

	int nPrimes = 0;
	int primes[10];

	for (int i = num - 1; i > 0; i--)
	{
		if (num % i == 0 && is_prime(i))
		{
			printf("%d is prime from %d\n", i, num);
			primes[nPrimes] = i;
			nPrimes++;
		}
	}

	if (nPrimes == 2)
	{
		printf("the number %d can be written as %d*%d\n", num, primes[0], primes[1]);
	}
	else 
	{
		printf("the number %d can't be written as two prime numbers\n", num);
	}
}

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
