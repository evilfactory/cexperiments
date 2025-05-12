#include <stdio.h>

// Exerc�cio 7: Fazer um programa C para que o usu�rio digite um conjunto de n�meros. Ap�s cada
// n�mero digitado, o programa deve perguntar se ele deseja digitar outros n�meros.Quando
// terminar, o programa deve mostrar quantos n�meros foram digitados, quantos foram n�meros
// pares e quantos foram n�meros �mpares e quantos destes n�meros eram divis�veis por 5.
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
