#include <stdio.h>

int main()
{
	char name[50];
	int age;

	printf("Type your name: \n");
	fgets(name, 50, stdin);
	printf("Type your age: \n");
	scanf("%d", &age);

	FILE* file = fopen("dados.txt", "w");

	fprintf(file, "%s", name);
	fprintf(file, "%d\n", age);
}