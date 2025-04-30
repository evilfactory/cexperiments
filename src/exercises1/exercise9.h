#include <stdio.h>

int digit_sum(int x)
{
	int sum = 0;
	while (1)
	{
		sum = sum + x % 10;
		x = x / 10;

		if (x == 0)
		{
			return sum;
		}
	}
}

int is_magico(int x)
{
	while (1)
	{
		x = digit_sum(x);
		if (x < 10)
		{
			if (x == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}

int main()
{
	int x;
	scanf("%d", &x);

	while (1)
	{
		x = digit_sum(x);
		if (x < 10)
		{
			if (x == 1)
			{
				printf("es magico\n");
			}
			else
			{
				printf("es nao magico\n");
			}
			break;
		}
	}
}