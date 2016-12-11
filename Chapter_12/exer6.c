int sum_array(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];
    
    return sum;
}

/* In pointer version */
int sum_array(int a[], int n)
{
    int *p, sum = 0;

    for (p = a; p < a + n; p++)
        sum += *p;

    return sum;
}

//or

int sum_array(int a[], int n)
{
    int *p, sum = 0;

    for (p = &a[0]; p < &a[n]; p++)
        sum += *p;

    return sum;
}