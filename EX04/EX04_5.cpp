#include <stdio.h>

int main(void)
{
    int x, y, res;

    for (y = 1; y <= 9; y++) {
        for (x = 1; x <= y; x++) {
            res = x * y;
            printf("%d * %d = %2d  ", x, y, res);
        }
        printf("\n");
    }

    return 0;
}