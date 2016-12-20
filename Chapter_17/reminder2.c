/* Compared with Chp13 reminder.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MAX_MSG 60

int read_line(char str[], int n);

int main(void)
{
    char *reminders[MAX_REMIND]; // 1
    char day_str[3], msg_str[MAX_MSG + 3];
    int day, i, j, num_reminder = 0;

    while (1) {
        if (num_reminder == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and number: ");
        scanf("%2d", &day);
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MAX_MSG);
        
        for (i = 0; i < num_reminder; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_reminder; j > i; j--)
            reminders[j] = reminders[j - 1];        //2

        reminders[i] = (char *)malloc(2 + strlen(msg_str) + 1);//3
        if (reminders[i] == NULL) {                 //4
            printf("-- No space left --\n");        //5
            break;                                  //6
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);
    
        num_reminder++;
    }

    printf("\nDay reminder\n");
    for (i = 0; i < num_reminder; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int i = 0, ch;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}