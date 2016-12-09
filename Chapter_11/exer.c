(4)
void swap(int *p, int *q)
{
    int x;

    x = *p;
    *p = *q;
    *q = x;
}

(6)
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else if (a[0] < a[1]) {
        *largest = a[1];
        *second_largest = a[0];
    } else return;

    for (i = 2; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i]; 
        } else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}