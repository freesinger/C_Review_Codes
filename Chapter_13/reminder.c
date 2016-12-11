/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MAX_MSG 60

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MAX_MSG];
    char day_str[3], msg_str[MAX_MSG + 3];
    int day, i, j, num_reminder = 0;

    while (1) {
        if (num_reminder == MAX_REMIND) {
            printf("-- No space left--\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day);  //change into string form
        read_line(msg_str, MAX_MSG);

        for (i = 0; i < num_reminder; i++)              //mark
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_reminder; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_reminder++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_reminder; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';  //str[n] = '\0'
    return i;
}