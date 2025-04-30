#include <stdio.h>

int main()
{
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 4; y++)
		{
			if (x == y)
			{
				printf("(%d, %d)\n", y, x);
			}
		}
	}
}
