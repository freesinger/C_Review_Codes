#include "stdafx.h"
#include <stdio.h>

int main (void)
{
    int digit_num[10] = {0};
    int digit, i;
    long int num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0) {
        digit = num % 10;
        digit_num[digit]++;
        num /= 10;
    }

    printf("Digit:        ");
    for (i = 0; i < 10; i++)
        printf("%3d", i);
    printf("\nOccurrences:  ");
    for (i = 0; i < 10; i++)
        printf("%3d", digit_num[i]);
    printf("\n");

    return 0;
}