#include <stdio.h>
#include <stdlib.h>

int main()
{
	int linhas = 3, colunas = 3;
	int i, j;
	int valor, somaParcial, somaTotal = 0;
	int contador = 0;

	for (i = 1; i <= linhas; i++)
	{
		j = 1;
		somaParcial = 0;

		do {
			valor = i * j;
			somaParcial = somaParcial + valor;
			somaTotal = somaTotal + valor;
			contador++;
			j++;
		} while (j <= colunas);
	}

	printf("\nTotal de elementos somados: %d\n", contador);
	printf("\nSoma total acumulada: %d\n", somaTotal);
}