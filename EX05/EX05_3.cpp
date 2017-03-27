#include <stdio.h>

int main(void)
{
    int size;

    printf("Enter the size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    for (int x = 0; x < size; x++) {
        for (int y = 0; y <= x; y++)
            printf("%d ", size);
        for (int i = x + 1; i < size; i++)
            printf("1 ");
        printf("\n");
    }

    return 0;
}