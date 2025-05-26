#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

typedef struct {
    Pessoa alunos[2];
} Turma;

int main() {
    int i;
    Turma t;

    for (i = 0; i < 2; i++) {
        getchar(); // limpa o buffer
        printf("Aluno %d\n", i + 1);

        printf("Nome: ");
        fgets(t.alunos[i].nome, sizeof(t.alunos[i].nome), stdin);

        printf("Idade: ");
        scanf("%d", &t.alunos[i].idade);
    }

    printf("\n--- Alunos da Turma ---\n");
    for (i = 0; i < 2; i++) {
        printf("Aluno %d - Nome: %sIdade: %d\n", i + 1, t.alunos[i].nome, t.alunos[i].idade);
    }

    return 0;
}