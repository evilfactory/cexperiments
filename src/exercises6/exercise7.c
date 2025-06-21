#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vec[i]);
	}

	int reversedVec[10];

	for (int i = 0; i < 10; i++)
	{
		reversedVec[i] = vec[9 - i];
	}

	for (int i = 0; i < 10; i++)
	{
		printf("vec[%d] = %d\n", i, reversedVec[i]);
	}
}