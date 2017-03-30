#include "stdafx.h"
#include <stdio.h>

#define N 4

void sort_array(char *array, int key)
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
	char array_o[N], *p;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &array_o[i]);

	printf("1 to decrement, any other to increment: ");
	key = getchar();

	p = array_o;
	sort_array(p, key);

	printf("Sorted array: ");
	for (i = 0; i < N; i++)
		printf("%d ", *(p + i));
	
	printf("\n");

	return 0;
}