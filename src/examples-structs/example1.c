#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin); // Lê o nome com espaços

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("Nome: %sIdade: %d\n", p.nome, p.idade);

    return 0;
}
