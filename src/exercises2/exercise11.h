#include <stdio.h>

// Exercício 11: Fazer um programa que leia um número decimal e o converta para binário.
int main()
{
    int num;
    scanf("%d", &num);

    int binary = 0;
    int house = 1;

    while (1)
    {
        int modulos = num % 2;
        if (modulos == 1)
        {
            binary = binary + house * 1;
        }

        house = house * 10;

        if (num == 0)
        {
            break;
        }

        num = num / 2;
    }
    
    printf("%d\n", binary);
}
