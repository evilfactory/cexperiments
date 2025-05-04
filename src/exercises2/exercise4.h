#include <stdio.h>

// Exercício 4: Fazer um programa C para ler as notas de um conjunto de alunos. O programa deve
// perguntar ao usuário se ele deseja ou não continuar a digitar as notas.Quando o usuário digitar
// N, deve - se imprimir a media das notas da turma, lembrando que a média = (Nota1 + Nota2) / 2.
int main()
{
    int amount = 0;
    int sum = 0;

    while (1)
    {
        int grade;
        printf("Type the grade: \n");
        scanf("%d", &grade);

        amount = amount + 1;
        sum = sum + grade;

        char option;
        printf("Do you wish to continue? (y/n)\n");
        scanf(" %c", &option);
        if (option != 'y')
        {
            break;
        }
    }

    printf("Average = %d", sum / amount);
}
