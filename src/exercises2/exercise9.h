#include <stdio.h>

int main()
{
	int number = 0;
	scanf("%d", &number);

	int operating = number;
	int result = 0;
	int casa = 1;

	while (1)
	{
		if (number / casa == 0)
		{
			break;
		}

		casa = casa * 10;
	}

	while (1)
	{
		int remainder = operating % 10;
		operating = operating / 10;

		casa = casa / 10;
		result = result + remainder * casa;

		if (operating == 0)
		{
			break;
		}
	}

	if (result == number)
	{
		printf("%d == %d", result, number);
	}
	else
	{
		printf("%d != %d", result, number);
	}
}
