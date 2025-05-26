#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int datasIguais(Data d1, Data d2) {
    return (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano);
}

int main() {
    Data d1, d2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    if (datasIguais(d1, d2)) {
        printf("As datas são iguais.\n");
    }
    else {
        printf("As datas são diferentes.\n");
    }

    return 0;
}