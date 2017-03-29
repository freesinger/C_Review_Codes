#include <stdio.h>

#define N 2

int main(void)
{
<<<<<<< HEAD
	int matrix[N][N], *x, *y, *max = 0, *temp;
=======
<<<<<<< HEAD
	int matrix[N][N], *x, *y, max = 0, *temp;
=======
	int matrix[N][N], matrix2[N][N], max = 0;
>>>>>>> 1413c1bad1b1a1537a28b15ed2ffc85273e297fe
>>>>>>> f06144f9e0932028cfa495b3ff8743f459b1be01
	int row, clo, pos_x, pos_y;

	printf("Enter %d * %d matrix: ", N, N);

	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++)
			scanf("%d", matrix[row][clo]);

	// convert matrix
<<<<<<< HEAD
	/*for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			*x = matrix[row][clo];
			*y = matrix[clo][row];
			if (row != clo) {
				temp = x;
				x = y;
				y = temp;
			}
		}*/
=======
	for (row = 0; row < N; row++)
<<<<<<< HEAD
		for (clo = 0; clo < N; clo++) {
			*x = matrix[row][clo];
			*y = matrix[clo][row];
			if (row != clo) {
				temp = x;
				x = y;
				y = temp;
			}
		}
=======
		for (clo = 0; clo < N; clo++)
			matrix2[clo][row] = matrix[row][clo];
>>>>>>> 1413c1bad1b1a1537a28b15ed2ffc85273e297fe
>>>>>>> f06144f9e0932028cfa495b3ff8743f459b1be01

	// find MAX number
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
<<<<<<< HEAD
			if (matrix[row][clo] > *max) {
				*max = matrix[row][clo];
=======
<<<<<<< HEAD
			if (matrix[row][clo] > max) {
				max = matrix[row][clo];
=======
			if (matrix2[row][clo] > max) {
				max = matrix2[row][clo];
>>>>>>> 1413c1bad1b1a1537a28b15ed2ffc85273e297fe
>>>>>>> f06144f9e0932028cfa495b3ff8743f459b1be01
				pos_x = row;
				pos_y = clo;
			}
		}
<<<<<<< HEAD
	
=======
<<<<<<< HEAD
	
	// print the converted matrix
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			printf("%d ", matrix[row][clo]);
			if (clo == N - 1)
				printf("\n");
		}

	printf("Max nummber is: %d\n", max);
	printf("Position: (%d, %d)\n", pos_x + 1, pos_y + 1);
=======
>>>>>>> 1413c1bad1b1a1537a28b15ed2ffc85273e297fe

>>>>>>> f06144f9e0932028cfa495b3ff8743f459b1be01
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