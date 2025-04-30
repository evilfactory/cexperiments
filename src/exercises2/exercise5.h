#include <stdio.h>


int main()
{
	int numbers = 0;
	while (1)
	{
		printf("Type a number\n");
		int number;
		scanf("%d", &number);
		
		numbers++;

		int signal;
		printf("Do you wish to continue? 1 for yes 0 for no\n");
		scanf("%d", &signal);

		if (signal == 0)
		{
			break;
		}
	}

	printf("amount numbers = %d", numbers);
}
