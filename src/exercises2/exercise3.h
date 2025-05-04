#include <stdio.h>

// Exercício 3: Fazer um programa C para ler 3 númerosinteiros e imprimi-los em ordem crescente.
int main()
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
