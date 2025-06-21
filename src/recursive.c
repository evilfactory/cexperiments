#include <stdio.h>

int fibonacci(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		if (n == 2)
		{
			return 1;
		}
		else
		{
			return fibonacci(n - 1) + fibonacci(n - 2);
		}
	}
}

int main()
{
	int x;
	scanf("%d", &x);
	
	for (int i = 1; i <= x; i++)
	{
		printf("%d\n", fibonacci(i));
	}
}