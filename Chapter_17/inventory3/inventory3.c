/* Linked list version */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "read_line.h"

#define NAME_LEN  25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL; /* pointer to first part */

struct part *find_part(int number);
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
        while (getchar() != '\n')
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
            default : printf("Illegal cade\n");
        }
        printf("\n");
    }
}

struct part *find_part(int number)
{
    struct part *p;

    for (p = inventory;
         p != NULL && number > p->number;
         p = p->next)
        ;
    if (number == p->number && p != NULL)
        return p;
    return NULL;
}

void insert(void)
{
    struct part *cur, *prev, *new_node;
    
    new_node = malloc(sizeof(struct part));
    if (new_node == NULL) {
        printf("Database is full\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL;
         cur != NULL && new_node->number > cur->number;
         prev = cur, cur = cur->next)
        ;
    if (cur != NULL && new_node->number == cur->number) {
        printf("Part already exist\n");
        free(new_node);
        return;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if (prev == NULL)
        inventory = new_node;
    else 
        prev->next = new_node;
}

void search(void)
{
    int number;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL) {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    } else 
        printf("Part not found.\n");
}

void update(void)
{
    int number, change, new_number;
    struct part *p, *new_name;
    char choice;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p >= 0) {
        printf("Update number(n), name(a) or on_hand(o)?");
        scanf(" %c", &choice);
            while (getchar() != '\n')
                ;
            switch (choice) {
                case 'n' : printf("Enter the new number:");
                           scanf("%d", &new_number);
                           p->number = new_number;
                           break;
                case 'o' : printf("Enter change in quantity: ");
                           scanf("%d", &change);
                           p->on_hand += change;
                           break;
                /*case 'a' : printf("Enter new name: ");
                           read_line(new_name->name, NAME_LEN);
                           strcpy(p->name, new_name->name);
                           break; */ 
                default  : printf("Invalid choice\n");
                           return;
            }
    } else
        printf("No such part found.\n");
}

void print(void)
{
    int i;
    struct part *p;

    printf("Part number     Part name           Quantity On Hand \n");
    for (p = inventory; p != NULL; p = p->next)
        printf("   %d           %-25s%d\n", p->number,
                p->name, p->on_hand);
}