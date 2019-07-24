//
// Created by Jung Yun Gyo on 2019-07-23.
//
#include <stdlib.h>
#include "stack.h"

Stack create_stack(int size)
{
    Stack stack;
    stack.top = -1;
    stack.size = size;
    stack.data = (char *) malloc(sizeof(char) * size);

    return stack;
}
int stack_is_empty(Stack* s)
{
    return (s -> top == -1);
}

void stack_push(Stack* s, char item)
{
    int top = s -> top;

    *(s -> data + top + 1) = item;

    s -> top = top + 1;
}

char stack_pop(Stack* s)
{
    int top = s -> top;
    char val = *((s -> data) + top);
    *((s -> data) + top) = '\0';
    s -> top = top - 1;

    return val;
}

char stack_peek(Stack* s)
{
    int top = s -> top;
    char val = *(s -> data + top);

    return val;
}

void delete_stack(Stack* s)
{
    free(s -> data);
}