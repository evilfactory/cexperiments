#include <stdio.h>

typedef struct {
    char rua[50];
    int numero;
} Endereco;

typedef struct {
    char nome[50];
    int idade;
    Endereco endereco;
} Pessoa;

int main() {
    Pessoa p;

    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("Idade: ");
    scanf("%d", &p.idade);
    getchar(); // limpa o \n do buffer

    printf("Rua: ");
    fgets(p.endereco.rua, sizeof(p.endereco.rua), stdin);

    printf("Número da casa: ");
    scanf("%d", &p.endereco.numero);

    printf("\nNome: %sIdade: %d\nEndereço: %sNº %d\n",
        p.nome, p.idade, p.endereco.rua, p.endereco.numero);

    return 0;
}