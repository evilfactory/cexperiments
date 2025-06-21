#include <stdio.h>

int main()
{
	FILE* file = fopen("frase.txt", "r");

	int palavras = 0;
	int caracteres = 0;
	int linhas = 0;
	int newLine = 1;

	while (1)
	{
		char c = fgetc(file);

		if (c == EOF)
		{
			break;
		}

		if (c == '\r')
		{
			newLine = 1;
		}
		else if (c == ' ')
		{
			palavras++;
		}
		else
		{
			caracteres++;

			if (newLine)
			{
				newLine = 0;
				palavras++;
				linhas++;
			}
		}
	}

	printf("linhas: %d, palavras: %d, caracteres: %d", linhas, palavras, caracteres);

	fclose(file);
}