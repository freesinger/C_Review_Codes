#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 30

char *duplicate(const char *s);
int read_line(char str[], int n);

int main(void)
{
    char *souce_string, *p, *string;

    printf("Enter one sentence: ");
    *string = read_line(souce_string, MAX_LEN);
    p = duplicate(string);

    printf("Original sentence: %s\n", string);
    printf("Output sentence: %s\n", p);

    return 0;
}

char *duplicate(const char *s)
{
    char *temp = malloc(strlen(s) + 1); //sizeof(s)?

    if(temp == NULL)
        return NULL;

    strcpy(temp, s);
    return temp;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while(isspace(ch == getchar()))
        ;
    while(ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}