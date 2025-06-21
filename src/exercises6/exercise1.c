#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		vec[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("vec[%d] = %d", i, vec[i]);
	}
}