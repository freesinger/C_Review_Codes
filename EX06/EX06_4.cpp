#include <stdio.h>

#define N 2

int main(void)
{
	int matrix[N][N], *x, *y, *max = 0, *temp;
	int row, clo, pos_x, pos_y;

	printf("Enter %d * %d matrix: ", N, N);

	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++)
			scanf("%d", matrix[row][clo]);

	// convert matrix
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			*x = matrix[row][clo];
			*y = matrix[clo][row];
			if (row != clo) {
				temp = x;
				x = y;
				y = temp;
			}
		}

	// find MAX number
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			if (matrix[row][clo] > *max) {
				*max = matrix[row][clo];
				pos_x = row;
				pos_y = clo;
			}
		}
	
	// print the converted matrix
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			printf("%d ", matrix[row][clo]);
			if (clo == N - 1)
				printf("\n");
		}

	printf("Max nummber is: %d\n", *max);
	printf("Position: (%d, %d)\n", pos_x + 1, pos_y + 1);

    return 0;
}