#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str_a = "http://www.github.com", *str_b;
    int len = strlen(str_a), start, j = 0;

    printf("Enter a number(< %d): ", len);
    scanf("%d", &start);

    for (int i = start; i < len; i++)
        *(str_b + j++) = *(str_a + i);

    for (int j = 0; j < len - start; j++)
        putchar(*(str_b));

    return 0;
}