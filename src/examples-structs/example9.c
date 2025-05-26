#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int saoIguais(Pessoa p1, Pessoa p2) {
    return (strcmp(p1.nome, p2.nome) == 0 && p1.idade == p2.idade);
}

int main() {
    Pessoa a, b;

    printf("Pessoa 1 - Nome: ");
    fgets(a.nome, sizeof(a.nome), stdin);
    printf("Pessoa 1 - Idade: ");
    scanf("%d", &a.idade);
    getchar(); // limpar buffer

    printf("Pessoa 2 - Nome: ");
    fgets(b.nome, sizeof(b.nome), stdin);
    printf("Pessoa 2 - Idade: ");
    scanf("%d", &b.idade);

    if (saoIguais(a, b)) {
        printf("As pessoas são iguais.\n");
    }
    else {
        printf("As pessoas são diferentes.\n");
    }

    return 0;
}