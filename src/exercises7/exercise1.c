#include <stdio.h>

typedef struct
{
	char Name[50];
	char MusicType[50];
	int BandSize;
	int Ranking;
} Band;

void print_band(Band band)
{
	printf(" Name: %s\n", band.Name);
	printf(" MusicType: %s\n", band.Name);
	printf(" BandSize: %d\n", band.BandSize);
	printf(" Ranking: %d\n", band.Ranking);
}

int main()
{
	Band bands[5];
	for (int i = 0; i < 5; i++)
	{
		getchar();
		printf("Name: \n");
		fgets(bands[i].Name, sizeof(bands[i].Name), stdin);
		printf("Music Type: \n");
		fgets(bands[i].MusicType, sizeof(bands[i].MusicType), stdin);
		printf("Band Size: \n");
		scanf("%d", &bands[i].BandSize);
		printf("Ranking: \n");
		scanf("%d", &bands[i].Ranking);
	}

	for (int i = 0; i < 5; i++)
	{
		print_band(bands[i]);
	}

	Band band;

	test(&band);
}

void test(Band* band)
{
	band->BandSize = 3;
}