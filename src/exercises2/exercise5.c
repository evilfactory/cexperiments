#include <stdio.h>

// Exercício 5: Fazer um programa C para que o usuário digite um conjunto de números. Após cada
// número o programa deve perguntar se ele deseja digitar outros números.Quando terminar, o
// programa deve mostrar quantos números foram digitados.
int main()
{
    int amount = 0;

    while (1)
    {
        int grade;
        printf("Type a number: \n");
        scanf("%d", &grade);

        amount = amount + 1;

        char option;
        printf("Do you wish to continue? (y/n)\n");
        scanf(" %c", &option);
        if (option != 'y')
        {
            break;
        }
    }

    printf("Numbers = %d", amount);
}
