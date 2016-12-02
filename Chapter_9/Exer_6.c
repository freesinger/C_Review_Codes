/* Show the specific number. */

#include <stdio.h>

int digit (int n, int k)
{
    int i;

    for (i = 1; i < k; i++)
        n /= 10;

    return n % 10;
    /* int count_n = 0, i;

    while (n > 0) {
        count_n++;
        n /= 10;            //n changed here :cause problem 
    }
    
    if (k > count_n)
        return 0;
    for (i = 1; i < k; i++)
        n /= 10;

    return n % 10; */
}

int main (void)
{
    unsigned int number;
    int location, digit_o;

    printf("Enter the number and location: ");
    scanf("%d%d", &number, &location);

    digit_o = digit (number, location);

    printf("The digit: %d\n", digit_o);

    return 0;
}