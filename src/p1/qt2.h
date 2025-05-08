#include <stdio.h>

int is_perfect(int x)
{
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			sum = sum + i;
		}
	}
	return sum == x;
}

int main()
{
	printf("min:\n");
	int min, max;
	scanf("%d", &min);
	printf("max:\n");
	scanf("%d", &max);

	for (int i = min; i <= max; i++)
	{
		if (is_perfect(i) && i % 2 == 0)
		{
			printf("%d eh perfeito\n", i);
		}
	}
}