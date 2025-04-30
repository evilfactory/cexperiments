#include <stdio.h>

void main_ex3_1()
{
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 4; y++)
		{
			if (x > y)
			{
				printf("(%d, %d)\n", y, x);
			}
		}
	}
}

void main_ex3_2()
{
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 4; y++)
		{
			if (x < y)
			{
				printf("(%d, %d)\n", y, x);
			}
		}
	}
}

void main_ex3_3()
{
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 4; y++)
		{
			if (x < 5 - y)
			{
				printf("(%d, %d)\n", y, x);
			}
		}
	}
}

void main_ex3_4()
{
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 4; y++)
		{
			if (x > 5 - y)
			{
				printf("(%d, %d)\n", y, x);
			}
		}
	}
}

void main_ex3_5()
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

void main_ex3_6()
{
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 4; y++)
		{
			if (x == 5 - y)
			{
				printf("(%d, %d)\n", y, x);
			}
		}
	}
}