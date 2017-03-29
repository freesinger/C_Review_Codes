#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str_a = "http://www.github.com";
    int len = strlen(str_a), start;
    char string[len];
    char *str_b = string;

    printf("Orignal string: %s\n", str_a);
    printf("Enter a number(< %d): ", len);
    scanf("%d", &start);

    strcpy(str_b, &str_a[start]);

    printf("New string is: %s\n", str_b);

    return 0;
}