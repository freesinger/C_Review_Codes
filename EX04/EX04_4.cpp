#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number)
{
    for (int advisor = 2; advisor * advisor <= number; advisor++)
        if (number % advisor == 0)
            return false;
    return true;
}

int main(void)
{
    bool prime;
    int acc = 0;

    for (int number = 2; number <= 100; number++) {
        prime = is_prime(number);
        if (prime) {
            printf("%d ", number);
            acc++;
        }
    }

    printf("\nThere is %d primes between 0 ~ 100\n", acc);

    return 0;
}