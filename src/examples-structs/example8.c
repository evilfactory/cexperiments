#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);

    int idade = 2025 - p.nascimento.ano;

    printf("Nome: %sIdade aproximada: %d anos\n", p.nome, idade);

    return 0;
}