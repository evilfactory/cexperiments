#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vec[i]);
	}

	int even = 0;
	int odd = 0;
	for (int i = 0; i < 10; i++)
	{
		if (vec[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("even = %d, odd = %d\n", even, odd);
}