#include <stdio.h>

void compare(int *i, int *j)
{
    int temp;

    if (*i < *j) {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}

int main(void)
{
    int x, y, z;
    int *p1 = &x, *p2 = &y, *p3 = &z;

    printf("Enter three integers: ");
    scanf("%d%d%d", &x, &y, &z);
    compare(p1, p2);
    compare(p1, p3);
    compare(p2, p3);

    printf("Sorted result: %d %d %d\n", *p1, *p2, *p3);

    return 0;
}