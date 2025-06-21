#include <stdio.h>

int main()
{
	FILE* file = fopen("dados.txt", "r");

	char name[50];
	int age;

	fscanf(file, "%s", name);
	fscanf(file, "%d", &age);

	printf("%s\n", name);
	printf("%d\n", age);
}