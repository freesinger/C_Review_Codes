#include <stdio.h>

#define MAX_LEN 10

int main(void)
{
    int array[MAX_LEN + 1] = {10, 20, 30, 40, 50, \
                              60, 70, 80, 90, 99};
    int input, temp, *p = array;  // pointer used here

    printf("Enter an integer: ");
    scanf("%d", &input);
    array[MAX_LEN] = input;

    for (int i = 0; i < MAX_LEN; i++) {
        if (*(p + i) > array[MAX_LEN]) {
            temp = *(p + i);
            *(p + i) = array[MAX_LEN];
            array[MAX_LEN] = temp;
        }
    }

    printf("Array now is: ");
    for (int i = 0; i < MAX_LEN + 1; i++)
        printf("%d ", *(p + i));

    printf("\n");

    return 0;
}