/* Calculate a facorial result of a interger */

#include <stdio.h>

int main(void)
{
    int input, result = 1, i;

    printf("Enter a integer: ");
    scanf("%d", &input);
    printf("Result: %d! = ", input);

    for (i = input; i > 1; i--) {
        printf("%d * ", i);
        result *= i;
    }
    printf("1 = %d\n", result);
    
    return 0;
}