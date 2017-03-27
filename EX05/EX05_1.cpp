#include <stdio.h>

int main(void)
{
    int array[6] = {1, 10, 20, 30, 40}; //orignal array sorted by value
    int input, temp;

    printf("Orignal array is: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);

    printf("\nEnter a number: ");
    scanf("%d", &input);

    array[5] = input;
    for (int i = 0; i < 6; i++) {
        if (array[i] > array[5]) {
            temp = array[i];
            array[i] = array[5];
            array[5] = temp;
        }
    }

    printf("Sorted array is: ");
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);

    printf("\n");

    return 0;
}