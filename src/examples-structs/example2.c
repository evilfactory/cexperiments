#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa p;

    printf("Informe o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("Informe a idade: ");
    scanf("%d", &p.idade);

    printf("Dados informados:\nNome: %sIdade: %d\n", p.nome, p.idade);

    return 0;
}
