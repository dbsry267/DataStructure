//
// Created by Jung Yun Gyo on 2019-07-28.
//

#ifndef DATASTRUCTURE_DEQUE_H
#define DATASTRUCTURE_DEQUE_H
typedef struct deque{
    int maxSize;
    int size;
    int front;
    int rear;
    char* data;
} Deque;

extern Deque deque_create(int maxSize);
extern int deque_empty(Deque *dq);
extern int deque_full(Deque *dq);
extern int deque_size(Deque *dq);
extern int deque_push_front(Deque *dq, char data);
extern int deque_push_back(Deque *dq, char data);
extern int deque_pop_front(Deque *dq);
extern int deque_pop_back(Deque *dq);
extern char deque_front(Deque *dq);
extern char deque_back(Deque *dq);
extern int deque_delete(Deque *dq);
#endif //DATASTRUCTURE_DEQUE_H
