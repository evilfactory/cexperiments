#include <stdio.h>

//Exercício 1: Fazer um programa C para gerar todos os números que pertencem a um intervalo definido pelo usuário.
void main_ex2_1()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i);
	}
}

char is_perfect_square(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i * i == n)
		{
			return 1;
		}
	}

	return 0;
}

void main_ex2_2()
{
	int min, max;
	scanf("%d", &min);
	scanf("%d", &max);

	for (int i = min; i < max; i++)
	{
		if (is_perfect_square(i))
		{
			printf("%d ", i);
		}
	}
}

void main_ex2_3()
{
	int n1, n2, n3;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);

	if (n1 > n2)
	{
		if (n2 > n3)
		{
			printf("%d %d %d", n1, n2, n3);
		}
		else if(n3>n1)
		{
			printf("%d %d %d", n3, n1, n2);
		}
		else {
			printf("%d %d %d", n1, n3, n2);
		}
	}
	else
	{
		if (n1 > n3)
		{
			printf("%d %d %d", n2, n1, n3);
		}
		else if (n3 > n2)
		{
			printf("%d %d %d", n3, n2, n1);
		}
		else {
			printf("%d %d %d", n3, n1, n2);
		}
	}
}

void main_ex2_4()
{
	int amountGrades = 0;
	int sumGrades = 0;

	while (1)
	{
		printf("Type the grade of the %dst student, type -1 to finish the list\n", amountGrades + 1);
		int grade;
		scanf("%d", &grade);

		if (grade == -1)
		{
			break;
		}

		amountGrades++;
		sumGrades = sumGrades + grade;
	}

	printf("average = %d\n", sumGrades / amountGrades);
}

void main_ex2_5()
{
	int numbers = 0;
	while (1)
	{
		printf("Type a number\n");
		int number;
		scanf("%d", &number);
		
		numbers++;

		int signal;
		printf("Do you wish to continue? 1 for yes 0 for no\n");
		scanf("%d", &signal);

		if (signal == 0)
		{
			break;
		}
	}

	printf("amount numbers = %d", numbers);
}

void main_ex2_6()
{
	int numbers = 0;
	int pairNumbers = 0;
	int oddNumbers = 0;
	while (1)
	{
		printf("Type a number\n");
		int number;
		scanf("%d", &number);

		numbers++;

		if (number % 2 == 0)
		{
			pairNumbers++;
		}
		else 
		{
			oddNumbers++;
		}

		int signal;
		printf("Do you wish to continue? 1 for yes 0 for no\n");
		scanf("%d", &signal);

		if (signal == 0)
		{
			break;
		}
	}

	printf("amount numbers = %d, pairs = %d, odds = %d", numbers, pairNumbers, oddNumbers);
}

void main_ex2_7()
{
	int numbers = 0;
	int pairNumbers = 0;
	int oddNumbers = 0;
	int divisableFiveNumbers = 0;
	while (1)
	{
		printf("Type a number\n");
		int number;
		scanf("%d", &number);

		numbers++;

		if (number % 2 == 0)
		{
			pairNumbers++;
		}
		else
		{
			oddNumbers++;
		}

		if (number % 5 == 0)
		{
			divisableFiveNumbers++;
		}

		int signal;
		printf("Do you wish to continue? 1 for yes 0 for no\n");
		scanf("%d", &signal);

		if (signal == 0)
		{
			break;
		}
	}

	printf("amount numbers = %d, pairs = %d, odds = %d, divisable by 5 = %d", numbers, pairNumbers, oddNumbers, divisableFiveNumbers);
}

void main_ex2_8()
{
	int number = 0;
	scanf("%d", &number);

	while (1)
	{
		int remainder = number % 10;
		printf("%d", remainder);
		number = number / 10;

		if (number == 0)
		{
			return;
		}
	}
}

void main_ex2_9()
{
	int number = 0;
	scanf("%d", &number);

	int operating = number;
	int result = 0;
	int casa = 1;

	while (1)
	{
		if (number / casa == 0)
		{
			break;
		}

		casa = casa * 10;
	}

	while (1)
	{
		int remainder = operating % 10;
		operating = operating / 10;

		casa = casa / 10;
		result = result + remainder * casa;

		if (operating == 0)
		{
			break;
		}
	}

	if (result == number)
	{
		printf("%d == %d", result, number);
	}
	else
	{
		printf("%d != %d", result, number);
	}
}

void main_ex2_10()
{
	int numbers = 0;
	int biggest = 0;
	int smallest = 0;
	while (1)
	{
		printf("Type a number\n");
		int number;
		scanf("%d", &number);

		if (number > biggest)
		{
			biggest = number;
		}

		if (number < smallest)
		{
			smallest = number;
		}

		numbers++;

		int signal;
		printf("Do you wish to continue? 1 for yes 0 for no\n");
		scanf("%d", &signal);

		if (signal == 0)
		{
			break;
		}
	}

	printf("biggest = %d, smallest = %d", biggest, smallest);
}

void main_ex2_11()
{
	int number = 0;
	int binary = 0;

	scanf("%d", &number);

	int casa = 1;

	while (1)
	{
		int remainder = number % 2;
		number = number / 2;

		binary = binary + remainder * casa;
	
		casa = casa * 10;

		if (number == 0)
		{
			break;
		}
	}

	printf("%d", binary);
}

void main_ex2_12()
{
	int num1 = 0;
	int num2 = 0;

	printf("number 1: ");
	scanf("%d", &num1);
	printf("number 2: ");
	scanf("%d", &num2);

	int divsum1 = 0;
	int divsum2 = 0;

	for (int i = 1; i < num1; i++)
	{
		if (num1 % i == 0)
		{
			divsum1 = divsum1 + i;
		}
	}

	for (int i = 1; i < num1; i++)
	{
		if (num2 % i == 0)
		{
			divsum2 = divsum2 + i;
		}
	}

	printf("div1 = %d, div2 = %d\n", divsum1, divsum2);

	if (num1 == divsum2 && num2 == divsum1)
	{
		printf("sao amigos :3\n");
	}
	else 
	{
		printf("nao sao amigos 3:\n");
	}
}

void main_ex2_13()
{
	int x, y;
	printf("number 1: ");
	scanf("%d", &x);
	printf("number 2: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("maior = %d\n", x);
		printf("diff = %d", x - y);
	}
	else
	{
		printf("maior = %d\n", y);
		printf("diff = %d", y - x);
	}
}

void main_ex2_14()
{
	int x, y;
	printf("min: ");
	scanf("%d", &x);
	printf("max: ");
	scanf("%d", &y);

	for (int i = x; i < y; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d impar\n", i);
		}
	}
}

