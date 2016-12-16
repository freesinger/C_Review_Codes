#include <stdio.h>
#include "word.h"

int read_char(void) //new funtion here why?
{
    int ch = getchar();

    if (ch == '\n' || ch == '\t')
        return ' ';
    return ch;
}

void read_line(char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char()) == ' ') //answer here
        ;
    while (ch != ' ' && ch != EOF) {
        if (pos < len)
            word[pos++] = ch;
        ch = getchar();
    }
    word[pos] = '\0';
}