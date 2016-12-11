/* (a) In reverse print a sentence */

#include <stdio.h>

#define N 100

int main(void)
{
    char message[N];
    int i;

    printf("Enter a message: ");
    for (i = 0; i < N; i++) {
        message[i] = getchar();
        if (message[i] == '\n')    //'', not ""
            break;      //in non-void function main : break != return
    }

    printf("Reversal is: ");
    for (i--; i >= 0; i--)   //why i-- could be used directly here, no need for counter
        putchar(message[i]);
    printf("\n");            //lack this proc will add an '%' as EOF

    return 0;
}