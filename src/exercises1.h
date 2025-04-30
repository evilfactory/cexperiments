#include <stdio.h>

// Fazer um programa em C para gerar os seguintes pares ordenados, usando o comando FOR imprimindo o seguinte resultado na tela:
// (1, 10), (2, 9), (3, 8), (4, 7), (5, 6), (6, 5), (7, 4), (8, 3), (9, 2), (10, 1)
void main_ex1_1()
{
	for (int i = 1; i <= 10; i++)
	{
		printf("(%d, %d)", i, 11 - i);
	}
}

// Fazer um programa C para encontrar todos os divisores de um n�mero digitado pelo usu�rio. Deve-se imprimir estes divisores na tela.
void main_ex1_2()
{
	int x = 0;
	scanf("%d", &x);

	for (int i = x; i > 0; i--)
	{
		if (x % i == 0)
		{
			printf("%d is divisable from %d\n", x, i);
		}
	}
}

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

// Fazer um programa C para encontrar todos os n�meros primos dentro de um intervalo definido pelo usu�rio. 
// O usu�rio informa o inicio e o fim. Com base nisto, deve-se achar todos os primos ali existentes e 
// imprimi-los na tela.
void main_ex1_3()
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

// Fazer um programa C para informar se um n�mero digitado pelo usu�rio pode ser representado pelo 
// produto de 2 n�meros primos.
void main_ex1_4()
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

// Fazer um programa C para informar se um dado n�mero digitado pelo usu�rio � um n�mero perfeito.
// Dizemos que um n�mero natural � perfeito se � igual � soma de todos os seus fatores(divisores), 
// excluindo ele pr�prio.Por exemplo, 6 e 28 s�o n�meros perfeitos, 
// veja: 6 = 1 + 2 + 3 (fatores de 6: 1, 2, 3 e 6), exclu�mos o n�mero 6.
void main_ex1_5()
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

// fazer um programa C para imprimir todos os n�meros perfeitos dentro de um intervalo definido pelo usu�rio.
void main_ex1_6()
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

// Fazer um programa C para imprimir um determinado termo da sequencia de Fibonacci.
// A sequ�ncia de Fibonacci � uma sequ�ncia num�rica infinita em que cada termo a partir 
// do terceiro � a soma dos dois termos anteriores.A sequ�ncia �(1, 1, 2, 3, 5, 8, 13, 21, 34, 55 �), 
// sendo fixo o primeiro termo = 1 e o 2o termo = 1.
void main_ex1_7()
{
	int termo = 0;
	scanf("%d", &termo);

	printf("1\n");

	int num1 = 1;
	int num2 = 0;
	int result = 1;
	for (int i = 0; i < termo; i++)
	{
		result = num1 + num2;
		num2 = num1;
		num1 = result;
		
		printf("%d\n", result);
	}
}

// Fazer um programa C para imprimir todos os termos da sequencia de Fibonacci, 
// dentro de um intervalo definido pelo usu�rio. O usu�rio informa at� que termo deve-se imprimir na tela. 
// Ou seja, se o usu�rio informa que deseja ver os 6 primeiros termos, deve ser impresso: 1, 1, 2, 3, 5, 8 
void main_ex1_8()
{
	main_ex1_7();
}

int digit_sum(int x)
{
	int sum = 0;
	while (1)
	{
		sum = sum + x % 10;
		x = x / 10;

		if (x == 0)
		{
			return sum;
		}
	}
}

int is_magico(int x)
{
	while (1)
	{
		x = digit_sum(x);
		if (x < 10)
		{
			if (x == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}

void main_ex1_9()
{
	int x;
	scanf("%d", &x);

	while (1)
	{
		x = digit_sum(x);
		if (x < 10)
		{
			if (x == 1)
			{
				printf("es magico\n");
			}
			else
			{
				printf("es nao magico\n");
			}
			break;
		}
	}
}

void main_ex1_10()
{
	int x, y;
	printf("min: ");
	scanf("%d", &x);
	printf("max: ");
	scanf("%d", &y);

	for (int i = x; i < y; i++)
	{
		if (is_magico(i))
		{
			printf("%d es magico\n", i);
		}
	}
}
