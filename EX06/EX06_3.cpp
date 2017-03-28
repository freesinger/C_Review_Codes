#include <stdio.h>

void direct_comp(int i, int j, int k)
{
    printf("Direct sorted result: ");
    
    if (i >= j) {
        if (j >= k) {
            printf("%d %d %d\n", k, j, i);
        } else if (k >= i) {
            printf("%d %d %d\n", j, i, k);
        } else 
            printf("%d %d %d\n", j, k, i);
    } else if (i >= k) { // i < j
        printf("%d %d %d\n", k, i, j);
    } else if (k >= j) {
        printf("%d %d %d\n", i, j, k);
    } else 
        printf("%d %d %d\n", i, k, j);
}

void array_comp(int i, int j, int k)
{
    printf("Array sorted result: ");

    int array[3], temp;
    array[0] = i, array[1] = j, array[2] = k;

    for (int a = 0; a < 3; a++) {
        for (int b = a + 1; b < 3; b++)
            if (array[b] < array[a]) {
                temp = array[b];
                array[b] = array[a];
                array[a] = temp;
            }
    }

    for (int a = 0; a < 3; a++)
        printf("%d ", array[a]);
    printf("\n");
}

void pointer_comp(int i, int j, int k)
{
    printf("Pointer sorted result: ");

    int array[3], temp;
    int *x = array;
    x[0] = i, x[1] = j, x[2] = k;

    for (int a = 0; a < 3; a++) {
        for (int b = a + 1; b < 3; b++)
            if (*(x + b) < *(x + a)) {
                temp = *(x + b);
                *(x + b) = *(x + a);
                *(x + a) = temp;
            }
    }

    for (int a = 0; a < 3; a++)
        printf("%d ", *(x + a));
    printf("\n");
}

int main(void)
{
    int i, j, k;

    printf("Enter 3 integers: ");
    scanf("%d%d%d", &i, &j, &k);

    direct_comp(i, j, k);
    array_comp(i, j, k);
    pointer_comp(i, j, k);

    return 0;
}