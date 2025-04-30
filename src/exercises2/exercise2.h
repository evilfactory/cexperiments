#include <stdio.h>

char is_perfect_square(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i * i == n)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	int min, max;
	scanf("%d", &min);
	scanf("%d", &max);

	for (int i = min; i < max; i++)
	{
		if (is_perfect_square(i))
		{
			printf("%d ", i);
		}
	}
}
