#include <stdio.h>

int main()
{
	int numbers = 0;
	int biggest = 0;
	int smallest = 0;
	while (1)
	{
		printf("Type a number\n");
		int number;
		scanf("%d", &number);

		if (number > biggest)
		{
			biggest = number;
		}

		if (number < smallest)
		{
			smallest = number;
		}

		numbers++;

		int signal;
		printf("Do you wish to continue? 1 for yes 0 for no\n");
		scanf("%d", &signal);

		if (signal == 0)
		{
			break;
		}
	}

	printf("biggest = %d, smallest = %d", biggest, smallest);
}
