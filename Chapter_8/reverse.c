#include "stdafx.h"
#include <stdio.h>

int main (void)
{
    int i, n;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int a[n]; //length depends on n

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("In reverse order: ");
    for (i = n - 1; i > 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}