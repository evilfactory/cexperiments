#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoas[3];

    for (int i = 0; i < 3; i++) {
        getchar(); // Limpa o buffer antes do fgets
        printf("Pessoa %d\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
    }

    printf("\n--- Lista de Pessoas ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d - Nome: %sIdade: %d\n", i + 1, pessoas[i].nome, pessoas[i].idade);
    }

    return 0;
}