#include <stdio.h>

int main()
{
	int number = 0;
	int binary = 0;

	scanf("%d", &number);

	int casa = 1;

	while (1)
	{
		int remainder = number % 2;
		number = number / 2;

		binary = binary + remainder * casa;
	
		casa = casa * 10;

		if (number == 0)
		{
			break;
		}
	}

	printf("%d", binary);
}
