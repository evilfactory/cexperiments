#include <stdio.h>

int main()
{
	int x, y;
	printf("number 1: ");
	scanf("%d", &x);
	printf("number 2: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("maior = %d\n", x);
		printf("diff = %d", x - y);
	}
	else
	{
		printf("maior = %d\n", y);
		printf("diff = %d", y - x);
	}
}