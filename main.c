#include <stdio.h>
#include "datastructure/stack.h"

int main() {
    Stack stack = create_stack(5);

    printf("%d\n", stack_is_empty(&stack));
    stack_push(&stack, 'a');
    stack_push(&stack, 'd');
    printf("%c\n", stack_pop(&stack));
    printf("%c\n", stack_pop(&stack));
    stack_push(&stack, 'f');
    stack_push(&stack, 'c');
    printf("%d\n", stack_is_empty(&stack));



    delete_stack(&stack);
    return 0;
}