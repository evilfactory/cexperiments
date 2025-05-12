#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, B, C;
	printf("carta 1: ");
	scanf("%d", &A);
	printf("carta 2: ");
	scanf("%d", &B);
	printf("carta 3: ");
	scanf("%d", &C);

	if (A < 0 || B < 0 || C < 0 || A > 100 || B > 100 || C > 100)
	{
		printf("ERRO: Numero fora dos limites"); 
		return 0;
	}

	if (A != B && B != C && C != A)
	{
		printf("ERRO: As cartas sao todas diferentes");
		return 0;
	}

	if (A == B && B == C)
	{
		printf("ERRO: as cartas sao todas iguais");
		return 0;
	}

	if (A == B)
	{
		printf("A carta 4 e %d", C);
	}
	if (A == C)
	{
		printf("A carta 4 e: %d", B);
	}
	if (B == C)
	{
		printf("A carta 4 e: %d", A);
	}

	return 0;
}