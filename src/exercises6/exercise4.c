#include <stdio.h>

int main()
{
	int vec[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vec[i]);
	}

	for (int j = 0; j < 10; j++)
	{
		char sorted = 1;
		
		for (int i = 0; i < 9 - j; i++)
		{
			if (vec[i] < vec[i + 1])
			{
				int aux = vec[i + 1];
				vec[i + 1] = vec[i];
				vec[i] = aux;
				
				sorted = 0;
			}
		}

		if (sorted) { break; }
	}

	for (int i = 0; i < 10; i++)
	{
		printf("vec[%d] = %d\n", i, vec[i]);
	}
}