#include <stdio.h>

int main(void)
{
    int x = 1;

    for (int i = 10; i > 1; i--)
        x = (x + 1) * 2;

    printf("Total number of peach: %d\n", x);

    return 0;
}