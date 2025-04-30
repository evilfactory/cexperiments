#include <stdio.h>

int main()
{
	int number = 0;
	scanf("%d", &number);

	while (1)
	{
		int remainder = number % 10;
		printf("%d", remainder);
		number = number / 10;

		if (number == 0)
		{
			return;
		}
	}
}
