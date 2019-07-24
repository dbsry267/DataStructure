#include <stdio.h>
#include "datastructure/stack.h"

int main() {
    Stack stack = stack_init(5);

    printf("%d\n", stack_empty(&stack));
    stack_push(&stack, 'a');
    stack_push(&stack, 'd');
    printf("%c\n", stack_top(&stack));
    stack_pop(&stack);
    stack_push(&stack, 'f');
    stack_push(&stack, 'c');
    printf("%d\n", stack_empty(&stack));
    stack_delete(&stack);
    printf("%c\n", stack_top(&stack));
    return 0;
}