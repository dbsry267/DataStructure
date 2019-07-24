//
// Created by Jung Yun Gyo on 2019-07-23.
//
#include <stdlib.h>
#include "stack.h"

Stack stack_init(int size)
{
    Stack stack;
    stack.top = -1;
    stack.size = size;
    stack.data = (char *) malloc(sizeof(char) * size);

    return stack;
}

int stack_empty(Stack* s)
{
    return (s -> top < 0);
}

int stack_push(Stack* s, char item)
{
    if (s -> top + 1 > s -> size) return -1;
    else {
        s -> data[++s -> top] = item;
        return 1;
    }
}

int stack_pop(Stack* s)
{
    if(s -> top < 0) return -1;
    else {
        s -> data[s -> top--] = '\0';
        return 1;
    }
}

char stack_top(Stack* s)
{
    return s -> data[s -> top];
}

void stack_delete(Stack* s)
{
    free(s -> data);
}

int stack_size(Stack* s)
{
    return s -> top + 1;
}