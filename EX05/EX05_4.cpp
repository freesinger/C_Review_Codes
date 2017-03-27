#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int m, n;

    printf("Enter the size of matrix: ");
    scanf("%d%d", &m, &n);

    int res = m * n, acc = 0;
    int array[m][n], res_array[res];

    for (int x = 0; x < m; x++) {
        srand((unsigned)time(NULL));   // initial rand()
        for (int y = 0; y < n; y++)
            array[x][y] = rand() % res + 1; // choose random number
    }
    
    printf("Orignal matrix: \n");
    for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++)
            printf("%d ", array[x][y]);
        printf("\n");
    }

    printf("Result: \n");
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++)
            res_array[acc++] = array[x][y];
    }

    for (int i = 0; i < acc; i++)
        printf("%d ", res_array[i]);
        
    printf("\n");

    return 0;
}
