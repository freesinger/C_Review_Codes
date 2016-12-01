/* Deals a random hand of cards */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROW 4
#define COLUMN  13

int main (void)
{
    bool in_hand[ROW][COLUMN] = {false};
    int hand_num, rank, suit;
    const char suit_code[] = {'f', 's', 'r', 'b'};
    const char rank_code[] = {'2', '3', '4', '5', '6', '7','8',
                              '9', 't', 'J', 'Q', 'K', 'A'};
    
    srand((unsigned) time(NULL)); //initial the rand()
    
    printf("Enter number of cards in hand: ");
    scanf("%d", &hand_num);

    while (hand_num > 0) {
        suit = rand() % ROW;
        rank = rand() % COLUMN;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            hand_num--;
            printf("%d%d", suit_code[suit], rank_code[rank]);
        }
    }
    printf("\n");

    return 0;
}