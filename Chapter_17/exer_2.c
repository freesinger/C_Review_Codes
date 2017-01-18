#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 30

char *duplicate(const char *s);
void read_line(char str[], int n);

int main(void)
{
    char *source_string, *p, *string;

    printf("Enter one sentence: ");
    read_line(source_string, MAX_LEN);
    /* string = malloc(MAX_LEN);
       strcpy(string, source_string); */
    string = source_string;
    p = duplicate(source_string);   //p = source_string; 

    printf("Original sentence: %s\n", source_string);
    printf("Secure sentence: %s\n", string);
    printf("Duplicate sentence: %s\n", p);

    return 0;
}

char *duplicate(const char *s) //NULL & temp is 'char *' type
{
    char *temp = malloc(strlen(s) + 1); //sizeof(s) wrong

    if(temp == NULL)
        return NULL;

    strcpy(temp, s);  //temp = s;
    return temp;
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while(isspace(ch = getchar()))
        ;
    while(ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
}