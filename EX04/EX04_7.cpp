#include <stdio.h>

int main(void)
{
    int input, i;

    printf("Enter a postive number: ");
    scanf("%d", &input);
    printf("Result: %d = ", input);

    if (input == 1)
        printf("1");

    for (i = 2; i < input; i++)
        while (i != input) {        //check if i is duplicate factor
            if (input % i == 0) {
                printf("%d * ", i);
                input = input / i;
            } else break;
        }
    printf("%d\n", input); // the last factor

    return 0;
}