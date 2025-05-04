#include <stdio.h>
#include <math.h>

// Exercício 9: Fazer um programa que leia um número inteiro e verifique se ele é o mesmo quando
// invertido.
int main()
{
	int number = 0;
	scanf("%d", &number);

	int aux = number;
	int numDigits = 0;
	while (1)
	{
		aux = aux / 10;
		numDigits++;
		if (aux == 0)
		{
			break;
		}
	}

	int reversedNumber = 0;
	aux = number;
	while (1)
	{
		int lastDigit = aux % 10;
		reversedNumber = reversedNumber + lastDigit * pow(10, numDigits - 1);
		aux = aux / 10;
		numDigits--;

		if (numDigits == 0)
		{
			break;
		}
	}

	if (reversedNumber == number)
	{
		printf("%d == %d\n", number, reversedNumber);
	}
	else
	{
		printf("%d != %d\n", number, reversedNumber);
	}
}
