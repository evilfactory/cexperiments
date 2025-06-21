#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vec[i]);
	}

	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + vec[i];
	}

	printf("sum: %d\n", sum);
}