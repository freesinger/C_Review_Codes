/* Tabulate the values of trigonometric functions */

#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double), double first,
              double last, double incr);

int main(void)
{
    double initial, final, increment;
    
    printf("Enter initial value: ");
    scanf("%lf", &initial);

    printf("Enter final value: ");
    scanf("%lf", &final);

    printf("Enter increment: ");
    scanf("%lf", &increment);

    printf("\n      x         cos(x)"
           "\n    -----      --------\n");
    tabulate(cos, initial, final, increment);

    printf("\n      x         sin(x)"
           "\n    -----      --------\n");
    tabulate(sin, initial, final, increment);

    printf("\n      x         tan(x)"
           "\n    -----      --------\n");
    tabulate(tan, initial, final, increment);

    return 0;
}

void tabulate(double (*f)(double), double first,
              double last, double incr)
{
    double x;
    int num_intervals, i;

    num_intervals = ceil((last - first) / incr);   //ceil(long double x) functions return the smallest integral value greater than or equal to x.
    for (i = 0; i <= num_intervals; i++) {
        x = first + i * incr;
        printf("%10.5f   %10.6f\n", x, (*f)(x));
    }
}