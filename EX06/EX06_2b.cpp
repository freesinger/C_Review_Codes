#include <stdio.h>

#define MAX_LEN 10

int main(void)
{
    int array[MAX_LEN + 1] = {10, 20, 30, 40, 50, \
                              60, 70, 80, 90, 99};
    int input, temp, *p = array;  // pointer used here

    printf("Enter an integer: ");
    scanf("%d", &input);
    *(p + MAX_LEN) = input;

    for (p = array; p < array + MAX_LEN; p++) {
        if (*p > *(array + MAX_LEN)) {
            temp = *p;
            *p = *(array + MAX_LEN);
            *(array + MAX_LEN) = temp;
        }
    }

    printf("Array now is: ");
    for (p = array; p < array + MAX_LEN; p++)
        printf("%d ", *p);

    printf("\n");

    return 0;
}