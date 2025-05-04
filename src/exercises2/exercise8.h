#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exerc�cio 8: Fazer um programa para solicitar ao usu�rio para digitar um inteiro de 5 posi��es.
// O programa deve imprimir o inverso deste n�mero.Por exemplo, se foi digitado 12345, o
// programa deve imprimir 54321.
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

	printf("reversed: %d\n", reversedNumber);
}
