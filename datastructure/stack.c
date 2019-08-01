//
// Created by Jung Yun Gyo on 2019-07-23.
//
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

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

int stack_full(Stack* s)
{
    return s->size == s->top + 1;
}

int stack_push(Stack* s, char item)
{
    if (stack_full(s)) error("Stack is full");
    else {
        s -> data[++s -> top] = item;
        return 1;
    }
}

int stack_pop(Stack* s)
{
    if(stack_empty(s)) error("Stack is empty");
    else {
        s -> data[s -> top--] = '\0';
        return 1;
    }
}

char stack_top(Stack* s)
{
    if(stack_empty(s)) error("Stack is empty");
    else return s -> data[s -> top];
}

void stack_delete(Stack* s)
{
    free(s -> data);
}

int stack_size(Stack* s)
{
    return s -> top + 1;
}