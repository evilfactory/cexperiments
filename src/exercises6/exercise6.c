#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vec[i]);
	}

	printf("number: ");
	int num;
	scanf("%d", &num);

	char found = 0;

	for (int i = 0; i < 10; i++)
	{
		if (vec[i] == num)
		{
			printf("found in vec[%d]\n", i);
			found = 1;
		}
	}

	if (!found)
	{
		printf("not found\n");
	}
}