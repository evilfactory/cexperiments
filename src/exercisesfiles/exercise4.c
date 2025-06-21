#include <stdio.h>

int main()
{
	FILE* file = fopen("frase.txt", "r");

	while (1)
	{
		char c = fgetc(file);

		if (c == EOF)
		{
			break;
		}

		fputc(c, stdout);
	}

	fclose(file);
}