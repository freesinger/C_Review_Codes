#include <stdio.h>

void switch_version(int grade);
void if_version(int grade);

int main(void)
{
    unsigned int grade;
    char choice;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    printf("Switch(s) or If(i): ");
    scanf(" %c", &choice);
    
    switch (choice) {
        case 's': case 'S':
            printf("Rank: ");
            switch_version(grade);
            break;
        case 'i': case 'I':
            printf("Rank: ");
            if_version(grade);
            break;
        default:
            printf("Error choice!\n");
            return 0;
    }
    printf("\n");

    return 0;
}

void switch_version(int grade)
{
    switch (grade/10) {
        case 9: case 10:
            putchar('A');
            break;
        case 8:
            putchar('B');
            break;
        case 7:
            putchar('C');
            break;
        case 6:
            putchar('D');
            break;
        case 5: case 4: case 3: case 2: case 1: case 0: //-9 ~ -1
            putchar('E');
            break;
        default: 
            printf("Error grade input!\n"); 
    }
}

void if_version(int grade)
{
    if (grade < 0 || grade > 100)
        printf("Error grade input!\n");
    else if (grade >= 90)
        putchar('A');
    else if (grade >= 80)
        putchar('B');
    else if (grade >= 70)
        putchar('C');
    else if (grade >= 60)
        putchar('D');
    else
        putchar('E'); 
}