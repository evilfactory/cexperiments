#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <conio.h>

/*
void fflush_experiment()
{
    char str[20] = "";
    for (int i = 0; i < 2; i++)
    {
        char curr[20];
        scanf("%s", curr);
        //printf("%s\n", str);

        strcat(str, curr);

        fflush(stdin);
    }

    printf("%d", strlen(str));
}
*/

/*

int tisCube(int x)
{
    for (int i = 0; i < x; i++)
    {
        if (pow(i, (1/3)) == x){
            return 1;
        }
    }

    return 0;
}


int isPerfectCube(long long num)
{
    long long left = 0;
    long long right = num;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long cube = mid * mid * mid;
        if (cube == num) {
            return 1;
        }
        else if (cube < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return 0;
}

int main()
{
    for (long long i = 0; i < 1000000000; i++)
    {
        long long a = pow(i, 3) + pow(i + 1, 3) + pow(i + 2, 3);

        printf("Check: a = %lli, b = %lli, c = %lli\n", i, i + 1, i + 2);


        if (isPerfectCube(a))
        {
            printf("Solution: a = %lli, b = %lli, c = %lli\n", i, i + 1, i + 2);
            int wa;
            scanf("%d", &wa);
        }
    }
}

*/

/*
int fib_term(int term)
{
    int a = 1;
    int b = 0;
    for (int i = 0; i < term; i++)
    {
        int temp = b;
        b = b + a;
        a = temp;
    }
    return b;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", fib_term(a));
}


union Cool
{
    VeryCool yeah;
    Test maybe;
};
typedef union Cool Cool;

struct VeryCool
{
    int a;
    int b;
    int c;
};
typedef struct VeryCool VeryCool;

enum Test
{
    Wawa = 123,
    Gah = 321
};
typedef enum Test Test;

int main()
{
    Test gah;

    VeryCool wawa;
    
    int a = 123;
    int64_t b = &a;
    printf("%lld\n", b);

    int* c = (int*)b;
    *c = 321;

    printf("%d\n", a);
}
*/


/*int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int n;
    printf("qual nota deseja consultar?");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == n)
        {
            printf("nota esta na posicao %d\n", i + 1);
        }
    }
}

int main()
{
    FILE* file = fopen("test.txt", "r");

    while (1)
    {
        char nome[50];

        fscanf(file, "%s", nome);

        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int nota;
            fscanf(file, "%d", &nota);
        }

        printf("%s %d", nome, sum / 3);
    }

    fclose(file);

    return 0;   
}


typedef struct {
    int64_t id;
    char name[50];
} Entity;

int main()
{
    Entity testEntity;
    fgets(testEntity.name, 50, stdin);
    scanf("%d", &testEntity.id);

    testEntity.name[strcspn(testEntity.name, "\n")] = '\0';

    printf("\nEntity data:");
    printf(" id = %s name = %d", testEntity.name, testEntity.id);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // PRECISO PARA GERAR NÚMEROS ALEATÓRIOS
#include <ctype.h> // precisa para usar isspace()
#include <string.h> // precisa para usar strlen

int main() {
    // Write C code here
    char Pessoa[50];
    int idade;
    int aceitar = 1;

    FILE* f;
    f = fopen("teste.txt", "w");
    fclose(f);

    f = fopen("teste.txt", "a");

    while (aceitar == 1) {
        printf("Por favor insira o nome de uma pessoa ");
        fgets(Pessoa, sizeof(Pessoa), stdin);

        printf("Por favor insira a idade da pessoa ");
        scanf("%d", &idade);

        if (f != NULL) {
            fputs(Pessoa, f);
            fprintf(f, " %d\n", idade);
        }

        printf("Deseja continuar? Sim(1) / Não(0)");
        scanf("%d", &aceitar);

    }

    fclose(f);

    return 0;
}

