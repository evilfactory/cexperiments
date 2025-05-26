#include <stdio.h>

int sum(int x, int y)
{
	return x + y;
}

int main()
{
	int num1, num2;
	printf("num1: \n");
	scanf("%d", &num1);
	printf("num2: \n");
	scanf("%d", &num2);

	printf("%d + %d = %d", num1, num2, sum(num1, num2));
}