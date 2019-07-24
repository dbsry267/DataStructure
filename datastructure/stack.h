//
// Created by Jung Yun Gyo on 2019-07-23.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H

struct stack{
    int size;
    int top;
    char *data;
};

typedef struct stack Stack;

extern Stack create_stack(int size);
extern int stack_is_empty(Stack* s);
extern void stack_push(Stack* s, char item);
extern char stack_pop(Stack* s);
extern char stack_peek(Stack* s);
extern void delete_stack(Stack* s);

#endif //DATASTRUCTURE_STACK_H
