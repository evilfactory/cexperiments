#include <stdio.h>

int main()
{
	FILE* file = fopen("registro.txt", "r");

	while (1)
	{
		char name[50];
		if (fscanf(file, "%s", name) == EOF)
		{
			break;
		}

		int age;
		if (fscanf(file, "%d", &age) == EOF)
		{
			break;
		}

		printf("nome: %s\n", name);
		printf("idade: %d\n", age);
	}
}