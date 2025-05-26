#include <stdio.h>

int countDigits(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
		if (n == 0)
		{
			break;
		}
	}

	return count;
}