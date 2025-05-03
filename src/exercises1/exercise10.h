#include <stdio.h>

int main()
{
	int x, y;
	printf("min: ");
	scanf("%d", &x);
	printf("max: ");
	scanf("%d", &y);

	for (int num = x; num < y; num++)
	{
        int operating = num;
        while (1)
        {
            int sum = 0;
            while (1)
            {
                int digit = operating % 10;
                operating = operating / 10;
                sum = sum + digit;

                if (operating == 0)
                {
                    break;
                }
            }

            operating = sum;

            if (operating < 10)
            {
                if (operating == 1)
                {
                    printf("%d is magic\n", num);
                }

                break;
            }
        }
	}
}
