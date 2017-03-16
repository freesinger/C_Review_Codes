#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int count, random_number, number_guess;

    srand((unsigned)time(NULL));
    random_number = rand() % 100 + 1;

    printf("A new random number has beeb chosen.\n");
    printf("Enter the number you guess(1 ~ 100): ");
    
    for (count = 0; count < 20; count++) {
        scanf("%d", &number_guess);
        if (number_guess < random_number) {
            printf("Too small\n");
            continue;
        } else if (number_guess > random_number) {
            printf("Too big\n");
            continue;
        } else {
            printf("Bulls eye! You took %d times!\n", count + 1);
            return 0;
        }
    }
    printf("20 times already!\n");

    return 0;
}