#include <stdio.h>

typedef struct {
	char Enrollment[50];
	char Name[50];
	float Grades[3];
} Student;

float calc_average(Student student)
{
	return (student.Grades[0] + student.Grades[1] + student.Grades[2]) / 3.0;
}

int main()
{
	Student students[5];
	for (int i = 0; i < 5; i++)
	{
		getchar();
		printf("Enrollment: \n");
		fgets(students[i].Enrollment, sizeof(students[i].Name), stdin);
		printf("Name: \n");
		fgets(students[i].Name, sizeof(students[i].Name), stdin);
		printf("Grade 1: \n");
		scanf("%f", &students[i].Grades[0]);
		printf("Grade 2: \n");
		scanf("%f", &students[i].Grades[1]);
		printf("Grade 3: \n");
		scanf("%f", &students[i].Grades[2]);
	}

	int biggestGrade1 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (students[i].Grades[0] > students[biggestGrade1].Grades[0])
		{
			biggestGrade1 = i;
		}
	}

	printf("%s had the best first grade\n", students[biggestGrade1].Name);

	int biggestAverage = 0;
	int smallestAverage = 0;
	for (int i = 0; i < 5; i++)
	{
		if (calc_average(students[i]) > calc_average(students[biggestAverage]))
		{
			biggestAverage = i;
		}

		if (calc_average(students[i]) < calc_average(students[smallestAverage]))
		{
			smallestAverage = i;
		}
	}

	printf("Biggest average was %s, smallest average was %s\n", students[biggestAverage].Name, students[smallestAverage].Name);

	for (int i = 0; i < 5; i++)
	{
		if (calc_average(students[i]) >= 6) 
		{
			printf("%s passed\n", students[i].Name);
		}
		else
		{
			printf("%s didn't pass\n", students[i].Name);
		}
	}
}