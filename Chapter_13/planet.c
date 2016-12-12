/* Check planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANET 5

int main(int argc, char *argv[])
{
    char *planet[] = {"A", "B", "C", "D", "E"};
    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANET; j++)
            if (strcmp(planet[j], argv[i]) == 0) {   //int strcmp(const char *s1, const char *s2)
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANET)
            printf("%s is not planet.\n", argv[i]);
    }

    return 0;
}