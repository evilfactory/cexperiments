#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_numbers(int numbers[], int size)
{
	int position = 0;
	while(position < 5)
	{
		int r = ((double)rand() / RAND_MAX) * (50 - 1) + 1;
		numbers[position] = r;
		int bad = 0;
		for (int i = position - 1; i >= 0; i--)
		{
			if (numbers[i] == r)
			{
				bad = 1;
			}
		}
		if (!bad)
		{
			position++;
		}
	}
}

void read_numbers(int numbers[], int size)
{
	scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
}

int verify_correct_numbers(int numbers[], int attempts[], int size)
{
	int rightNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (numbers[i] == attempts[j])
			{
				rightNumbers++;
			}
		}
	}

	return rightNumbers;
}

int main()
{
	srand(time(NULL) * 123);

	int numbers[5];
	random_numbers(numbers, 5);

	for (int i = 10; i > 0; i--) 
	{
		printf("Adivinhe os 5 numeros, voce tem %d tentativa(s)\n", i);

		int attempt[5];
		read_numbers(attempt, 5);

		int rightNumbers = verify_correct_numbers(numbers, attempt, 5);

		if (rightNumbers == 5)
		{
			printf("Voce acertou todos os numeros, parabens. :3\n");
			return;
		}
		else
		{
			printf("Voce acertou %d numeros\n", rightNumbers);
		}
	}

	printf("voce perdeu, faz o l\n");
	printf("os numeros eram: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}