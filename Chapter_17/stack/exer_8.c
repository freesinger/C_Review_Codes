/* Pop stack pointer version */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

struct node {
    int value;
    struct node *next;
};

struct node *top = NULL;

void make_empty(void)
{
    struct node *temp;

    while (top != NULL) {
        temp = top;
        top = top -> next;
        free(temp);
    }
}

bool is_empty(void)
{
    return top = NULL;
}

bool push(int i)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        return false;
    new_node -> value = i;
    new_node = new_node -> next;
    top = new_node;

    return true;
}

int pop(void)
{
    struct node *temp;
    int i;

    if (is_empty()) {
        printf("*** Stack underflow, program terminated ***\n");
        exit(1);
    }

    i = top -> value;
    temp = top;
    top = top -> next;
    free(temp);

    return i;
}

int main(void)
{
    int i, j;

    is_empty();
    make_empty();
    for (i = 0; i < 10; i++)
        if (push(i))
            printf("Push value: %d\n", i);
    /* for (j = 9; j >= 0; j--)
        printf("Pop value: %d\n", pop()); */
    
    return 0;
}