#include <stdio.h>

// Fazer um programa em C para gerar os seguintes pares ordenados, usando o comando FOR imprimindo o seguinte resultado na tela:
// (1, 10), (2, 9), (3, 8), (4, 7), (5, 6), (6, 5), (7, 4), (8, 3), (9, 2), (10, 1)
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		printf("(%d, %d)", i, 11 - i);
	}
}