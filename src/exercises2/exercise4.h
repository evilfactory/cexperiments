#include <stdio.h>

int main()
{
	int amountGrades = 0;
	int sumGrades = 0;

	while (1)
	{
		printf("Type the grade of the %dst student, type -1 to finish the list\n", amountGrades + 1);
		int grade;
		scanf("%d", &grade);

		if (grade == -1)
		{
			break;
		}

		amountGrades++;
		sumGrades = sumGrades + grade;
	}

	printf("average = %d\n", sumGrades / amountGrades);
}
