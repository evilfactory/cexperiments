#include <stdio.h>

int main()
{
	int x, y;
	printf("min: ");
	scanf("%d", &x);
	printf("max: ");
	scanf("%d", &y);

	for (int i = x; i < y; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d impar\n", i);
		}
	}
}

