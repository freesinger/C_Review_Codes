#include <stdio.h>

int main(void)
{
    int number, total, ten = 1;

    printf("Enter a and n: ");
    scanf("%d%d", &number, &total);

    int temp = number;
    int sum = number;

   
    for (int j = 1; j < total; j++) {
        ten *= 10;
        temp += ten * number;
        printf("%d\n", temp);
        sum += temp;
    }

    printf("%d\n", sum);

    return 0;
}