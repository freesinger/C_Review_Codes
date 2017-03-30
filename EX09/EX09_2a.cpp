#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

//#define N 4
static int N;

void sort_array(int *array, int key)
{
	int j, k, temp;

	if (key == 1) {
		for (j = 0; j < N; j++)
			for (k = j + 1; k < N; k++)
				if (*(array + k) > *(array + j)) {
					temp = *(array + k);
					*(array + k) = *(array + j);
					*(array + j) = temp;
				}
	}
	else {
		for (j = 0; j < N; j++)
			for (k = j + 1; k < N; k++)
				if (*(array + k) < *(array + j)) {
					temp = *(array + k);
					*(array + k) = *(array + j);
					*(array + j) = temp;
				}
	}
}

int main(void)
{
	int i = 0, key;
	int *array;

	printf("Enter the size: ");
	scanf("%d", &N);
	array = (int *)malloc(N * sizeof(int));

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &array[i]);

	printf("1 to decrement, any other to increment: ");
	scanf("%d", &key);

	//int *p = array;
	sort_array(array, key);

	printf("Sorted array: ");
	for (i = 0; i < N; i++)
		printf("%d ", *(array + i));
	
	printf("\n");

	return 0;
}