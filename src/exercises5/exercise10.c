#include <stdio.h>

int sum(int x, int y)
{
	return x + y;
}

int divide(int x, int y)
{
	return x / y;
}

int sub(int x, int y)
{
	return x - y;
}

int mult(int x, int y)
{
	return x * y;
}

int main()
{
	int num1, num2;
	char operation;
	printf("Num 1: \n");
	scanf("%d", &num1);
	printf("Num 2: \n");
	scanf("%d", &num2);

	while (1)
	{
		printf("Operation (+, -, *, /): \n");
		scanf(" %c", &operation);

		if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
		{
			printf("Invalid operation\n");
		}
		else
		{
			break;
		}
	}

	int result = 0;

	switch (operation)
	{
		case '+':
			result = sum(num1, num2);
			break;
		case '-':
			result = sub(num1, num2);
			break;
		case '*':
			result = mult(num1, num2);
			break;
		case '/':
			result = divide(num1, num2);
			break;
	}

	printf("Result: %d\n", result);
}