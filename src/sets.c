#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void permute(int arr[], int l, int r) {
	if (l == r) {
		for (int i = 0; i <= r; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	else {
		for (int i = l; i <= r; i++) {
			swap(&arr[l], &arr[i]);
			permute(arr, l + 1, r);
			swap(&arr[l], &arr[i]); // backtrack
		}
	}
}

int main()
{
	int set[] = { 1, 2, 3, 4 };
	int size = 4;

	printf("{");
	for (int i = 0; i <= size; i++)
	{
		if (i == 0)
		{
			printf("{}");
			continue;
		}

		permute(set, 0, i - 1);
	}
}