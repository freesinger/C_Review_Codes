#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

int main(void)
{
    int a[N][N] = {0};
    int count = 1;
    int row = 0, col = N / 2;

    while (count <= N*N)
    {
        a[row][col] = count;
        int i = row;
        int j = col;

        if (i == 0)
        {
            i = N - 1;
        } else {
            i = i - 1;
        }
        
        j = (j + 1) % N;
        if (a[i][j] != 0 || (row == 0 && col == N - 1)) {
            i = row + 1;
            j = col;
        }
        row = i;
        col = j;
        count++;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
