/* Check planet names */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANET 5

int stri_equal(const char *s, const char *t);

int main(int argc, char *argv[])
{
    char *planet[] = {"A", "B", "C", "D", "E"};
    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANET; j++)
            if (stri_equal(argv[i], planet[j])) {  
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANET)
            printf("%s is not planet.\n", argv[i]);
    }

    return 0;
}

int stri_equal(const char *s, const char *t)
{
    int i;

    for (i = 0; toupper(s[i]) == toupper(t[i]; i++)
        if (s[i] == '\0')
            return 1;

    return 0;
}