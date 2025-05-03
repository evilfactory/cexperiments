#include <stdio.h>

// Fazer um programa C para informar se um número digitado pelo usuário pode ser representado pelo 
// produto de 2 números primos.
int main()
{
	int num;
	scanf("%d", &num);

	int nPrimes = 0;
	int n1;
	int n2;

	if (num == 2) 
	{
		n1 = 2;
		n2 = 2;
		nPrimes = 2;
	}
	else 
	{
		for (int i = num - 1; i > 1; i--)
		{
			if (num % i == 0)
			{
				printf("%d is prime from %d\n", i, num);

				if (nPrimes == 0) { n1 = i; }
				if (nPrimes == 1) { n2 = i; }

				nPrimes++;
			}
		}
	}

	if (nPrimes == 2)
	{
		printf("the number %d can be written as %d*%d\n", num, n1, n2);
	}
	else 
	{
		printf("the number %d can't be written as two prime numbers\n", num);
	}
}