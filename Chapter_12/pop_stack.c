/* Chapter 10.2 */

#include <stdbool.h>

#define STACK_SIZE 100

int content[STACK_SIZE];
int top = 0;

void make_empty(void)               
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        content[top++] = i;
}

void pop(void)
{
    if (is_empty())
        stack_underflow();
    else 
        return content[--top];
}

/* In pointer version */

int content[STACK_SIZE];
int *ptr_top;

void make_empty(void)
{
    ptr_top = &content[0];
}

bool is_empty(void)
{
    return ptr_top == &content[0];
}

bool is_full(void)
{
    return top == &content[STACK_SIZE];
}