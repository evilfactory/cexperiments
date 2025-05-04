#include <stdio.h>

// Exercício 7: Fazer um programa C para que o usuário digite um conjunto de números. Após cada
// número digitado, o programa deve perguntar se ele deseja digitar outros números.Quando
// terminar, o programa deve mostrar quantos números foram digitados, quantos foram números
// pares e quantos foram números ímpares e quantos destes números eram divisíveis por 5.
int main()
{
    int amount = 0;
    int pairs = 0;
    int impairs = 0;
    int divisablesByFive = 0;

    while (1)
    {
        int num;
        printf("Type a number: \n");
        scanf("%d", &num);

        amount = amount + 1;

        if (num % 5 == 0)
        {
            divisablesByFive++;
        }

        if (num % 2 == 0)
        {
            pairs++;
        }
        else
        {
            impairs++;
        }

        char option;
        printf("Do you wish to continue? (y/n)\n");
        scanf(" %c", &option);
        if (option != 'y')
        {
            break;
        }
    }

    printf("Numbers = %d, pairs = %d, impairs = %d, divisable by 5 = %d", amount, pairs, impairs, divisablesByFive);
}
