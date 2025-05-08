#include <stdio.h>

int main()
{
	printf("digite o numero:\n");
	int num;
	scanf("%d", &num); int original = num;
	int n100 = 0; int n50 = 0; int n20 = 0; int n10 = 0; int n5 = 0; int n2 = 0;
	while (num > 1) {
		if (num / 100 > 0)
		{
			n100 = n100 + num / 100;
			num = num % 100;
		}
		if (num / 50 > 0)
		{
			n50 = n50 + num / 50;
			num = num % 50;
		}
		if (num / 20 > 0)
		{
			n20 = n20 + num / 20;
			num = num % 20;
		}
		if (num / 10 > 0)
		{
			n10 = n10 + num / 10;
			num = num % 10;
		}
		if (num / 5 > 0)
		{
			n5 = 5 + num / 5;
			num = num % 5;
		}
		if (num / 2 > 0)
		{
			n2 = n2 + num / 2;
			num = num % 2;
		}
	}
	if (n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2 != original)
	{
		printf("erro: o banco não trabalha com nota de 1 real\n");
		return 0;
	}

	printf("%d, %d, %d, %d, %d, %d notas de 100, 50, 20, 10, 5, 2 respectivamente\n", n100, n50, n20, n10, n5, n2);
	return 0;
}