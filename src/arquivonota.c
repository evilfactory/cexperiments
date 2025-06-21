#include <stdio.h>

typedef struct
{
    char Nome[50];
    int Notas[3];
} Aluno;

int main()
{
    FILE* file;

    file = fopen("test.txt", "w");

    Aluno alunos[3];

    scanf("%s", &alunos[0].Nome);
    scanf("%s", &alunos[1].Nome);
    scanf("%s", &alunos[2].Nome);

    for (int i = 0; i < 3; i++)
    {
        fprintf(file, "%s\n", alunos[i].Nome);

        for (int j = 0; j < 3; j++)
        {
            fprintf(file, "%d\n", alunos[i].Notas[j]);
        }
    }

    fclose(file);

    file = fopen("test.txt", "r");

    for (int j = 0; j < 3; j++)
    {
        char nome[50];

        if (!fgets(nome, 50, file))
        {
            break;
        }

        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int nota;
            fscanf(file, "%d", &nota);
            sum = sum + nota;
        }

        printf("%s %d\n", nome, sum / 3);

        getc(file);
    }

    fclose(file);

    return 0;
}