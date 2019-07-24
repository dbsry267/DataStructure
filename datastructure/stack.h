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

// 스택을 생성하는 함수
extern Stack stack_init(int size);

// 스택이 비었는지 여부를 0과 1로 반환
extern int stack_empty(Stack* s);

// 스택에 새로운 값을 추가
extern int stack_push(Stack* s, char item);

// 스택 맨위의 값을 제거
extern int stack_pop(Stack* s);

// 스택 맨위의 값을 가져옮
extern char stack_top(Stack* s);

// 스택을 제거
extern void stack_delete(Stack* s);

// 스택의 크기를 반환
extern int stack_size(Stack* s);

#endif //DATASTRUCTURE_STACK_H
