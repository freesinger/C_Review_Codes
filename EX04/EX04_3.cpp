/* Find WANSHU within 200 */

#include <stdio.h>

int main(void)
{
    int temp, acc = 0;

    for (int i = 2; i <= 200; i++) {
        for (temp = 1; temp < i; temp++)
            if (i % temp == 0)
                acc += temp;

        if (i == acc)
            printf("%d ", acc);
        acc =0; //acc must be clear here
    }

    printf("\n");

    return 0;
}