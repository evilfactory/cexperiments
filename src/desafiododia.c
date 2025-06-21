#include <stdio.h>
#include <string.h>


/*
Um consultório médico precisa organizar a sua fila de consulta.O médico
atende tanto jovens quanto adultos.Para as pessoas com mais de 60 anos, o
atendimento tem preferência.Para tentar organizar as filas a secretaria
implantou um sistema de senhas.Cada paciente que chega recebe uma
senha.Se o paciente é menor de 60 anos as senhas iniciam no número 100 e
vão até o número 290. Se o paciente é maior do que 60 anos as senhas
iniciam com numeração em 300 e vão até 490. Para todos os pacientes, é
exigido o seu nome, data de nascimento, quantidade de consultas no
mês e um número de celular para contato, bem como um campo para
identificar quando foi a sua data da última consulta.As senhas são
geradas da seguinte forma : para as pessoas maiores de 60 anos, os números
são ímpares sequenciais.Para as pessoas menores de 60 anos, os números
são pares sequenciais.Se secretaria necessita :

(1)Quando o paciente for atendido, deve ser mostrado no vídeo, todos
os seus dados.

(2)Deve ser possível informar se um determinado paciente está na fila
para atendimento.

(3)Deve ser possível imprimir uma das filas no vídeo(normal, ou de
	idosos).

(4)Deve - se poder ver quantos pacientes foram atendidos no dia.

Fazer um programa em C para ajudar a secretária na tarefa de organizar as
filas do consultório.

Para cada uma das 4 opções, acima, deve existir uma função.
*/

// senha para menor que 60 [100, 290] pares
// senha para maior que 60 [300, 490] impares

typedef struct
{
	int Day;
	int Month;
	int Year;
} Date;

// Para todos os pacientes, é exigido o seu nome, data de nascimento, quantidade de consultas no mês e um número de celular para contato, bem como um campo para identificar quando foi a sua data da última consulta
typedef struct
{
	int Valid;
	char Name[50];
	Date BirthDate;
	int MonthConsultations;
	char Contact[50];
	Date LastConsultation;
	int Number;
} Patient;

int is_old(Patient patient)
{
	return 2025 - patient.BirthDate.Year > 60;
}

Date prompt_date()
{
	Date date;
	printf("Digite o dia: \n");
	scanf("%d", &date.Day);
	printf("Digite o mes: \n");
	scanf("%d", &date.Month);
	printf("Digite o ano: \n");
	scanf("%d", &date.Year);

	return date;
}

Patient prompt_patient()
{
	printf(" Novo paciente\n");
	Patient patient;

	printf(" Nome do paciente: \n");
	scanf("%s", &patient.Name);

	printf(" Digite a data de nascimento: \n");
	patient.BirthDate = prompt_date();

	printf(" Digite a quantidade consultas no mes: \n");
	scanf("%d", &patient.MonthConsultations);

	printf(" Contato do paciente: \n");
	scanf("%s", &patient.Contact);

	printf(" Digite a data da ultima consulta: \n");
	patient.LastConsultation = prompt_date();

	patient.Valid = 1;

	return patient;
}

void print_date(Date date)
{
	printf("%d/%d/%d\n", date.Day, date.Month, date.Year);
}

void print_patient(Patient patient)
{
	printf("Nome: %s\n", patient.Name);
	printf("Data de nascimento: "); print_date(patient.BirthDate);
	printf("Consultados no mes: %d\n", patient.MonthConsultations);
	printf("Contact: %s\n", patient.Contact);
	printf("Ultima consulta: "); print_date(patient.LastConsultation);
}

int insert_patient(Patient patients[], int size, Patient patient)
{
	for (int i = 0; i < size; i++)
	{
		if (patients[i].Valid == 0)
		{
			patients[i] = patient;
			return 1;
		}
	}

	return 0;
}

void fill_patient(Patient patients[], int size)
{
	for (int i = 0; i < size; i++)
	{
		patients[i].Valid = 0;
	}
}

void attend_patient(Patient patients[], int size)
{
	int hole = 0;

	Patient* patient = &patients[0];
	for (int i = 0; i < size; i++)
	{
		if (patients[i].Valid && patients[i].Number < patient->Number)
		{
			patient = &patients[i];
			hole = i;
		}
	}

	for (int i = hole; i < size - 1; i++)
	{
		Patient aux = patients[i];
		patients[i] = patients[i + 1];
		patients[i + 1] = aux;
	}

	printf("Paciente atendido: \n");
	print_patient(*patient);

	patient->Valid = 0;
}

void print_queue(Patient patients[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (patients[i].Valid)
		{
			printf(" %s - %d\n", patients[i].Name, patients[i].Number);
		}
	}
}

Patient prompt_find_patient(Patient elderly[], Patient adults[], int size)
{
	printf("Digite o contato: ");

	char contact[50];
	scanf(" %s", contact);

	for (int i = 0; i < size; i++)
	{
		if (elderly[i].Valid && strcmp(contact, elderly[i].Contact) == 0)
		{
			return elderly[i];
		}
		if (adults[i].Valid && strcmp(contact, adults[i].Contact) == 0)
		{
			return adults[i];
		}
	}

	Patient invalidPatient;
	invalidPatient.Valid = 0;
	return invalidPatient;
}

int main()
{
	Patient elderly[100];
	Patient adults[100];
	fill_patient(elderly, 100);
	fill_patient(adults, 100);

	int numberElderly = 301;
	int numberAdults = 100;

	int attendedPatients = 0;

	char op;
	while (1)
	{
		printf("Digite a operação que deseja fazer: \n");
		printf("a - Adicionar paciente a fila\n");
		printf("k - Atender paciente velho\n");
		printf("l - Atender paciente adulto\n");
		printf("v - Verificar se um paciente esta na fila\n");
		printf("1 - Imprimir fila dos velhos\n");
		printf("2 - Imprimir fila dos adultos\n");
		printf("n - Imprimir numero de pacientes atendidos\n");

		scanf(" %c", &op);

		switch (op)
		{
		case 'a':

			Patient patient = prompt_patient();

			if (is_old(patient))
			{
				patient.Number = numberElderly;
				numberElderly += 2;
				insert_patient(elderly, 100, patient);
			}
			else
			{
				patient.Number = numberAdults;
				numberAdults += 2;
				insert_patient(adults, 100, patient);
			}
			break;

		case 'k':
			attend_patient(elderly, 100);
			attendedPatients++;
			break;
		case 'l':
			attend_patient(adults, 100);
			attendedPatients++;
			break;
		case 'v':
			Patient foundPatient = prompt_find_patient(elderly, adults, 100);
			if (foundPatient.Valid)
			{
				print_patient(foundPatient);
			}
			else
			{
				printf("Paciente nao encontrado. \n");
			}
			break;
		case '1':
			printf("Fila dos velhos: \n");
			print_queue(elderly, 100);
			break;
		case '2':
			printf("Fila dos adultos: \n");
			print_queue(adults, 100);
			break;
		case 'n':
			printf("Numero de pacientes atendidos no dia: %d\n", attendedPatients);
			break;
		}
	}
}