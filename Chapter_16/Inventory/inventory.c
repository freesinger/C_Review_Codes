/* Maintain a parts database (array version) */

#include <stdio.h>
#include <string.h>
#include "read_line.h"

#define NAME_LEN  25
#define MAX_PARTS 100 

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0; /* Number of parts stored currently */

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void)
{
    char code;

    while (1) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')  /* Skip the '\n' */
            ;
        switch(code) {
            case 'i': insert();
                        break;
            case 's': search();
                        break;
            case 'u': update();
                        break;
            case 'p': print();
                        break;
            case 'q': return 0;
            default:  printf("Illegal Code\n");
        }
        printf("\n");
    }
}

int find_part(int number)
{
    int i;

    for (i = 0; i < num_parts; i++)
        if (inventory[i].number == number)
            return i;
    return -1;
}

void insert(void)
{
    int part_number;

    if (part_number == MAX_PARTS) {
        printf("Database is full.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(part_number) >= 0) {
        printf("Part has already existed.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

void search(void)
{
    int search_number, i;

    printf("Enter part number: ");
    scanf("%d", &search_number);
    i = find_part(search_number);
    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else
        printf("Part not found.\n");
}

void update(void)
{
    int number, i, change, new_number;
    char choice, new_name[NAME_LEN + 1];

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Update number(n), name(a) or on_hand(o)?");
        scanf(" %c", &choice);
        while (getchar() != '\n')
            ;
        switch (choice) {
            case 'a': printf("Enter the new name: ");
                      read_line(new_name, NAME_LEN);
                      strcpy(inventory[i].name, new_name);
                      break;
            case 'n': printf("Enter the new number: ");
                      scanf("%d", &new_number);
                      inventory[i].number = new_number;
                      break;
            case 'o': printf("Enter change in quantity on hand: ");
                      scanf("%d", &change);
                      inventory[i].on_hand += change;
                      break;
            default : printf("Invalid choice.\n"); 
                      return;      
        }
    } else
        printf("No part found.\n");
}

void print(void)
{
    int i; 

    printf("Part Number     Part Name         Quantity On Hand \n");
    for (i = 0; i < num_parts; i++)
        printf("   %d           %-25s%d\n", inventory[i].number,
                inventory[i].name, inventory[i].on_hand);
}
