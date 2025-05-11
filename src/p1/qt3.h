#include <stdio.h>

int main() {
    int value;
    printf("Digite o numero: ");
    scanf("%d", &value);

    int originalValue = value;
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

    if (remainder == 1 && n2 >= 2) {
        n2 -= 2;
        n5 += 1;
        remainder = 0;
    }
    else if (remainder == 1 && n5 >= 1)
    {
        n2 += 3;
        n5 -= 1;
        remainder = 0;
    }

    printf("\nNotas necessarias para %d:\n", originalValue);
    printf("R$100: %d\n", n100);
    printf("R$50 : %d\n", n50);
    printf("R$20 : %d\n", n20);
    printf("R$10 : %d\n", n10);
    printf("R$5  : %d\n", n5);
    printf("R$2  : %d\n", n2);

    if (remainder != 0)
    {
        printf("Sobrou R$%d que nao pode ser representado com as notas disponiveis\n", remainder);
    }

    if (n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2 != originalValue)
    {
        printf("Error in %d.\n", originalValue);
    }

    return 0;
}