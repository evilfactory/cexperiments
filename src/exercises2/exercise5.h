#include <stdio.h>

// Exerc�cio 5: Fazer um programa C para que o usu�rio digite um conjunto de n�meros. Ap�s cada
// n�mero o programa deve perguntar se ele deseja digitar outros n�meros.Quando terminar, o
// programa deve mostrar quantos n�meros foram digitados.
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
