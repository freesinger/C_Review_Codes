#include <stdio.h>

#define MAXLEN 9

int main(void)
{
    for (int i = 1; i <= MAXLEN; i++) {
        for (int j = 0; j < MAXLEN - i; j++)
            printf(" ");
        for (int k = 0; k < i; k++)
            printf("%d", i);
        printf("\n");
    }

    return 0;
}