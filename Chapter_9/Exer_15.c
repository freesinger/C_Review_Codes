/* Looking for middle number. */

#include <stdio.h>

double median (double x, double y, double z)
{
    double res;   //simplify the procedure

    if (x <= y)
        if (x >= z)
            res = x;
        else if (y >= z)
            res = z;
        else 
            res = y;
    else if (z >= x)
        res = x;
        else if (y >= z)
            res = y;
        else
            res = z;
    
    return res;
}

int main (void)
{
    double a, b, c;

    printf("Enter 3 float number: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    printf("The middle number is: %lf\n", median (a, b, c));

    return 0;
}