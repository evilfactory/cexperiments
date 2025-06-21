#include <stdio.h>

int main()
{
	FILE* read = fopen("frase.txt", "r");
	FILE* write = fopen("copia.txt", "w");

	while (1)
	{
		char c = fgetc(read);

		if (c == EOF)
		{
			break;
		}

		fputc(c, write);
	}

	fclose(read);
	fclose(write);
}