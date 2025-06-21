#include <stdio.h>

typedef struct {
	int Day;
	int Month;
	int Year;
} Date;

typedef struct {
	char Name[11];
	char RG[10];
	char CPF[12];
	Date BirthDate;
	Date AdmissionDate;
} Register;


void print_register(FILE* file, Register reg)
{
	fprintf(file, "%s - %s - %s - %s - %s\n", reg.Name, reg.RG, reg.CPF, reg.BirthDate, reg.AdmissionDate);
}

int main()
{
	FILE* file = fopen("registros.txt", "r");

	Register registers[100];
	char line[100];

	Register registro;
	int max = 0;
	while (fscanf(file, "%10s %9s %11s %d/%d/%d %d/%d/%d", registro.Name, registro.RG, registro.CPF, &registro.BirthDate.Day, &registro.BirthDate.Month, &registro.BirthDate.Year, &registro.AdmissionDate.Day, &registro.AdmissionDate.Month, &registro.AdmissionDate.Year) != EOF)
	{
		registers[max] = registro;
		max++;
	}

	fclose(file);

	char c = '.';
	while (c != "x")
	{
		printf("O que deseja fazer? \n");
		printf("a - adicionar registro\n");
		printf("n - ler registro com nome especifico\n");
		printf("p - printar numero de registros mais velhos\n");
		printf("x - sair\n");

		c = getchar();

		int num = 0;

		switch (c)
		{
			case 'a':

				Register reg;
				
				printf("Digite nome: \n");
				scanf("%s", reg.Name);
				printf("Digite rg: \n");
				scanf("%s", reg.RG);
				printf("Digite cpf: \n");
				scanf("%s", reg.CPF);
				printf("Digite data de nascimento: \n");
				scanf("%s", reg.BirthDate);
				printf("Digite data de admissao: \n");
				scanf("%s", reg.AdmissionDate);

				file = fopen("registros.txt", "a");
				print_register(file, reg);
				fclose(file);

				break;

			case 'p':

				printf("Digite a data:\n");
				Date date;
				scanf("%d/%d/%d", &date.Day, &date.Month, &date.Year);
				getchar();

				for (int i = 0; i < max; i++)
				{
					if (registers[i].BirthDate.Year < date.Year)
					{
						num++;
					}
					else if (registers[i].BirthDate.Year == date.Year)
					{
						if (registers[i].BirthDate.Month < date.Month)
						{
							num++;
						}
						else if (registers[i].BirthDate.Month == date.Month)
						{
							if (registers[i].BirthDate.Day < date.Day)
							{
								num++;
							}
						}
					}
				}

				printf("quantidade: %d\n", num);
				break;
		}
	}
}