#include <stdio.h>

// Fazer um programa para informar se um numero digitado pelo usuário é um número mágico.
// Um número é considerado mágico se, ao somar seus dígitos repetidamente até restar apenas um dígito, o resultado final for 1.
// Exemplo:
// 19 → 1 + 9 = 10 → 1 + 0 = 1 (Mágico ✅)
// 1234 → 1 + 2 + 3 + 4 = 10 → 1 + 0 = 1 (Mágico ✅)
// 20 → 2 + 0 = 2 (Não mágico ❌)

int main()
{
    int num;
    printf("Number: \n");
    scanf("%d", &num);

    int operating = num;
    while (1)
    {
        int sum = 0;
        while (1)
        {
            int digit = operating % 10;
            operating = operating / 10;
            sum = sum + digit;

            if (operating == 0)
            {
                break;
            }
        }

        operating = sum;

        if (operating < 10)
        {
            if (operating == 1)
            {
                printf("%d is magic", num);
            }
            else
            {
                printf("%d is not magic", num);
            }

            break;
        }
    }
}