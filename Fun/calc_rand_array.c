#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 15

int main(void)
{
    int n, sum = 0, i;

    printf("Enter number(>3): ");
    scanf("%d", &n);
    int a = n;
    
    //array must declare here
    int array[n];
    int flag[MAX] = {0};

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    /* do {
        scanf("%d", &array[i]);
        sum += array[i];
        i++;
    } while (getchar() != '\n' && i < n); */
    int counter = 0;
    while (1) {
        srand((unsigned)time(NULL));
        int value = rand() % n; //value in range 0 ~ n - 1

        if (flag[value] == 0) {
            flag[value] = 1;
            counter++;
            sum += array[value];
        }
        if (counter > 2) break;
    }
    
    printf("Sum of array: %d\n", sum);
    
    return 0;
}