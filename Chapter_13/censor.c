/* Exchange 'foo' in str into 'xxx' */

#include <stdio.h>
#include <string.h>

#define N 30

void censor(char s[]);

int main(void)
{
    char initial[N], ch;
    int i;

    printf("Enter your sentence: ");
    for (i = 0; i < N; i++) {
        ch = getchar();
        if (ch != '\n')
            initial[i] = ch;
    }

    censor(initial);

    printf("Result: ");
    for (i = 0; i < N; i++)
        putchar(initial[i]);
    printf("\n");

    return 0;
}

void censor(char s[])
{
    int n;

    for (n = 0; s[n] != '\0'; n++)
        if (s[n] == 'f' && s[n + 1] == 'o' && s[n + 2] == 'o')
            s[n] = s[n + 1] = s[n + 2] = 'x';
}