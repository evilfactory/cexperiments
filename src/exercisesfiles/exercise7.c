#include <stdio.h>

int main()
{
	FILE* file = fopen("registro.txt", "w");

	char op = 's';

	while (op == 's')
	{
		char nome[50];
		int age;

		printf("Digite o nome:\n");
		scanf("%s", nome);
		printf("Digite a idade:\n");
		scanf("%d", &age);

		fprintf(file, "%s\n", nome);
		fprintf(file, "%d\n", age);
		
		getchar();
		printf("Digite (s/n) se desejar adicionar mais registros: \n");
		op = getchar();
	}
}