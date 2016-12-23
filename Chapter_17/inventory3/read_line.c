#include <stdio.h>
#include <ctype.h>
#include "read_line.h"

int read_line(char str[], int n)
{
    int ch, i;

    while (isspace(ch = getchar()))
        ;
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}