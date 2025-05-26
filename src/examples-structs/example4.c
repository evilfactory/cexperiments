#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

void imprimirPessoa(Pessoa p) {
    printf("Nome: %sIdade: %d\n", p.nome, p.idade);
}

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    imprimirPessoa(p);

    return 0;
}