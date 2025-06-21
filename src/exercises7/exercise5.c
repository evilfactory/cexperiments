#include <stdio.h>

typedef struct {
	char Name[50];
	int Year;
	float Duration;
} Movie;

typedef struct {
	char Name[20];
	int AmountMovies;
	Movie Movies[];
} Director;

int main()
{

}