/* Maintain a parts database (array version).
   Moving num_parts and inventory[] into main()
   cause whole procedure becomes very complica-
   ted.                                        */

#include <stdio.h>
#include <string.h>
#include "readline.h"

#define NAME_LEN  25
#define MAX_PARTS 100 

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

int find_part(int number, const struct part inv[], int np);
void insert(struct part inv[], int *np);
void search(const struct part inv[], int np);
void update(struct part inv[], int np);
void print(const struct part inv[], int np);

int main(void)
{
    char code;
    int num_parts = 0; /* Number of parts stored currently */
    struct part inventory[MAX_PARTS];

    while (1) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')  /* Skip the '\n' */
            ;
        switch(code) {
            case 'i': insert(inventory, &num_parts); //Only insert（）can change num_parts cause the * pointer
                        break;
            case 's': search(inventory, num_parts);
                        break;
            case 'u': update(inventory, num_parts);
                        break;
            case 'p': print(inventory, num_parts);
                        break;
            case 'q': return 0;
            default:  printf("Illegal Code\n");
        }
        printf("\n");
    }
}

int find_part(int number, const struct part inv[], int np)
{
    int i;

    for (i = 0; i < np; i++)
        if (inv[i].number == number)
            return i;
    return -1;
}

void insert(struct part inv[], int *np)
{
    int part_number;

    if (part_number == MAX_PARTS) {
        printf("Database is full.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(part_number, inv, *np) >= 0) { //in func find_part(), all 3 are formal parameters.
        printf("Part has already existed.\n");     
        return;
    }

    inv[*np].number = part_number;
    printf("Enter part name: ");
    readline(inv[*np].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inv[*np].on_hand);
    (*np)++;           //why np must be pointer
}

void search(const struct part inv[], int np)
{
    int search_number, i;

    printf("Enter part number: ");
    scanf("%d", &search_number);
    i = find_part(search_number, inv, np);
    if (i >= 0) {
        printf("Part name: %s\n", inv[i].name);
        printf("Quantity on hand: %d\n", inv[i].on_hand);
    } else
        printf("Part not found.\n");
}

void update(struct part inv[], int np)
{
    int number, i, change, new_number;
    char choice, new_name[NAME_LEN + 1];

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, inv, np);
    if (i >= 0) {
        printf("Update number(n), name(a) or on_hand(o)?");
        scanf(" %c", &choice);
        while (getchar() != '\n')
            ;
        switch (choice) {
            case 'a': printf("Enter the new name: ");
                      readline(new_name, NAME_LEN);
                      strcpy(inv[i].name, new_name);
                      break;
            case 'n': printf("Enter the new number: ");
                      scanf("%d", &new_number);
                      inv[i].number = new_number;
                      break;
            case 'o': printf("Enter change in quantity on hand: ");
                      scanf("%d", &change);
                      inv[i].on_hand += change;
                      break;
            default:  printf("Invalid choice.\n"); 
                      return;      
        }
    } else
        printf("No part found.\n");
}

void print(const struct part inv[], int np)
{
    int i; 

    printf("Part Number     Part Name         Quantity On Hand \n");
    for (i = 0; i < np; i++)
        printf("   %d           %-25s%d\n", inv[i].number,
                inv[i].name, inv[i].on_hand);
}
