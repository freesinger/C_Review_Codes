/* (b) In reverse print a sentence */

#include <stdio.h>

#define N 100

int main(void)
{
    char message[N], *p;

    printf("Enter a message: ");
    for (p = message; p < message + N; p++) { //for (p = &message[0]; p < &message[N]; p++);
        *p = getchar();
        if (*p == '\n')
            break;
    }

    printf("Reversal is: ");
    for (p--; p >= message; p--) //for (p--; p >= message[0]; p--)
        putchar(*p);
    printf("\n");

    return 0;
}