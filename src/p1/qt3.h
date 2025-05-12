#include <stdio.h>

int main() {
    int input;
    printf("Digite o numero: ");
    scanf("%d", &input);

    int value = input;

    int remainder;

    int n100, n50, n20, n10, n5, n2;

    if (value < 0)
    {
        printf("Valor invalido");
        return 0;
    }

    remainder = value;

    n100 = remainder / 100;
    remainder %= 100;

    n50 = remainder / 50;
    remainder %= 50;

    n20 = remainder / 20;
    remainder %= 20;

    n10 = remainder / 10;
    remainder %= 10;

    n5 = remainder / 5;
    remainder %= 5;

    n2 = remainder / 2;
    remainder %= 2;

    if (remainder == 1)
    {
        if (n5 >= 1)
        {
            n5 -= 1;
            n2 += 3;
            remainder = 0;
        }
        else if (n10 >= 1)
        {
            n10 -= 1;
            n5 += 1;
            n2 += 3;
            remainder = 0;
        }
        else if (n20 >= 1)
        {
            n20 -= 1;
            n10 += 1;
            n5 += 1;
            n2 += 3;
            remainder = 0;
        }
        else if (n50 >= 1)
        {
            n50 -= 1;
            n20 += 2;
            n10 += 0;
            n5 += 1;
            n2 += 3;
            remainder = 0;
        }
        else if (n100 >= 1)
        {
            n100 -= 1;
            n50 += 1;
            n20 += 1;
            n10 += 2;
            n5 += 1;
            n2 += 3;
            remainder = 0;
        }
    }

    if (remainder != 0)
    {
        printf("Sobrou R$%d que nao pode ser representado com as notas disponiveis\n", remainder);
    }
    if (n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2 != value)
    {
        printf("Error in %d. %d != %d\n", value, n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2, value);
    }


    printf("\nNotas necessarias para %d:\n", value);
    printf("R$100: %d\n", n100);
    printf("R$50 : %d\n", n50);
    printf("R$20 : %d\n", n20);
    printf("R$10 : %d\n", n10);
    printf("R$5  : %d\n", n5);
    printf("R$2  : %d\n", n2);

    return 0;
}