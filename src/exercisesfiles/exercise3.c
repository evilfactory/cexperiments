#include <stdio.h>
#include <conio.h>

int main()
{
	FILE* file = fopen("frase.txt", "w");

	printf("Digite oq quer escrever: \n");

	while (1)
	{
		char c = getch();

		if (c == 27)
		{
			break;
		}

		fputc(c, stdout);

		fputc(c, file);
	}

	fclose(file);
}