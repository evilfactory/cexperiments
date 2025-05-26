#include <stdio.h>

int fatorial(int n)
{
	int product = 1;
	for (int i = n; i > 1; i--)
	{
		product = product * n;
	}
	return product;
}