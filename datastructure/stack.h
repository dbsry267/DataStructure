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

extern Stack stack_init(int size);
extern int stack_empty(Stack* s);
extern int stack_push(Stack* s, char item);
extern int stack_pop(Stack* s);
extern char stack_top(Stack* s);
extern void stack_delete(Stack* s);
extern int stack_size(Stack* s);

#endif //DATASTRUCTURE_STACK_H
