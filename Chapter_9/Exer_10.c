//(a)
#include <stdio.h>

int max_num (int a[], int n)
{
    int i, max = a[0];

    for (i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];

    return max;
}

//(b)
#include <stdio.h>

int average_num (int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}

//(c)
#include <stdio.h>

int num_postive (int a[], int n)
{
    int i, num;

    for (i = 0; i < n; i++)
        if (a[i] > 0)
            num++;

    return num;
}