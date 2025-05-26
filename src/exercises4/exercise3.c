#include <stdio.h>

// Leia 5 notas (valores float) e calcule a média. Exiba quais notas foram acima da média.
int main()
{
	float vet[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Digite a nota %d: ", i);
		scanf("%f", &vet[i]);
	}

	float average = 0;
	for (int i = 0; i < 5; i++)
	{
		average = average + vet[i];
	}
	average = average / 5;

	for (int i = 0; i < 5; i++)
	{
		if (vet[i] > average)
		{
			printf("%d esta acima da media\n", i + 1);
		}
	}
}