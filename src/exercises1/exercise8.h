#include <stdio.h>

// Fazer um programa C para imprimir todos os termos da sequencia de Fibonacci, dentro de um intervalo definido pelo usuário. 
// O usuário informa até que termo deve-se imprimir na tela. Ou seja, se o usuário informa que deseja ver os 6 primeiros termos, deve ser impresso: 1, 1, 2, 3, 5, 8 
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
		printf("%d ", result);
	}
}