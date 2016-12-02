/* Calculate the day of a year. */

#include <stdio.h>

int day_of_year (int month, int day, int year)
{
    int num_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int counter = 0, i;

    for (i = 1; i < month; i++)
        counter += num_month[i - 1];

    if (year % 4 == 0 && month > 2)
        return counter + day + 1;    //consider the leap years

    return counter + day;
}

int main (void)
{
    int month, day, year;
    int res;

    printf("Enter the day in year: ");
    scanf("%4d%2d%2d", &year, &month, &day);

    res = day_of_year (month, day, year);

    printf("Result: %d\n", res);

    return 0;
}