#include <stdio.h>


// Fazer um programa C para imprimir um determinado termo da sequencia de Fibonacci.
// A sequência de Fibonacci é uma sequência numérica infinita em que cada termo a partir 
// do terceiro é a soma dos dois termos anteriores.A sequência é(1, 1, 2, 3, 5, 8, 13, 21, 34, 55 …), 
// sendo fixo o primeiro termo = 1 e o 2o termo = 1.
int main()
{
	int termo = 0;
	scanf("%d", &termo);

	int num1 = 0;
	int num2 = 1;
	int result = 1;
	for (int i = 0; i < termo; i++)
	{
		result = num1 + num2;
		num2 = num1;
		num1 = result;
	}
	printf("%d ", result);
}
