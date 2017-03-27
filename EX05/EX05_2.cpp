#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 20

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()));
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';

    return i;
}

int main(void)
{
    char str1[MAX_LEN], str2[MAX_LEN], temp[MAX_LEN];

    printf("Enter str1: ");
    read_line(str1, MAX_LEN);
    printf("Enter str2: ");
    read_line(str2, MAX_LEN);

    strcpy(temp, str1); // copy the string for second use

    strcat(str1, str2);
    printf("Strcat version: %s\n", str1);

    printf("Without strcat version: ");
    for (int j = 0; j < MAX_LEN; j++) 
        putchar(temp[j]);
    for (int k = 0; k < MAX_LEN; k++)
        putchar(str2[k]);

    printf("\n");
    
    return 0;
}