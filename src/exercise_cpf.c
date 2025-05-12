#include <stdio.h>
#include <math.h>

int main()
{
	long long cpf = 0;
	scanf("%f", &cpf);

	long long reversedCpf = 0;
	for (int i = 1; i <= 12; i++)
	{
		long long div = pow(10, i - 1);
		reversedCpf = reversedCpf + (cpf / div) % 10;
		if (cpf / div == 0)
		{
			break;
		}
	}

	int sum = 0;
	long long digits = cpf;;
	for (int i = 10; i >= 2; i--)
	{
		int digit = digits % 10;
		sum = sum + i * digit;
		digits = digits / 10;
	}
	int remainder = (sum % 11) - 11;
	if (remainder > 10) { remainder = 0; }
	if (remainder != digits % 10)
	{
		printf("cpf invalido na primeira\n");
		return;
	}

	sum = 0;
	digits = cpf;;
	for (int i = 11; i >= 2; i--)
	{
		int digit = digits % 10;
		sum = sum + i * digit;
		digits = digits / 10;
	}
	remainder = sum % 11 - 11;
	if (remainder > 10) { remainder = 0; }
	if (remainder != digits % 10)
	{
		printf("cpf invalido na segunda\n");
		return;
	}
}