#include <stdio.h>

// Fazer um programa C para encontrar todos os divisores de um número digitado pelo usuário. Deve-se imprimir estes divisores na tela.
int main()
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
