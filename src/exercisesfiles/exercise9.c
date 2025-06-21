#include <stdio.h>

int main()
{
	FILE* file = fopen("registro.txt", "r");

	int num = 0;

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

		if (age >= 30)
		{
			num++;
		}
	}

	printf("Quantidade de pessoas com idade maior que 30: %d", num);
}