#include <stdio.h>

typedef struct {
    char nome[50];
    float notas[3];
} Aluno;

int main() {
    int i;
    Aluno a;
    float soma = 0;

    printf("Nome do aluno: ");
    fgets(a.nome, sizeof(a.nome), stdin);

    for (i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &a.notas[i]);
        soma += a.notas[i];
    }

    float media = soma / 3;

    printf("Aluno: %sMédia: %.2f\n", a.nome, media);

    return 0;
}