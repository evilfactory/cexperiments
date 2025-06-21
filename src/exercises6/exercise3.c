#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vec[i]);
	}

	int min = vec[0], max = vec[0];
	for (int i = 0; i < 10; i++)
	{
		if (vec[i] > max)
		{
			max = vec[i];
		}
		if (vec[i] < min)
		{
			min = vec[i];
		}
	}

	printf("min = %d, max = %d\n", min, max);
}