//
// Created by Jung Yun Gyo on 2019-07-28.
//

#include "deque.h"
#include <stdlib.h>
#include <stdio.h>

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

Deque deque_create(int maxSize)
{
    Deque deque;

    deque.size = -1;
    deque.rear = 0;
    deque.maxSize = maxSize;
    deque.front = 0;
    deque.data = (char *) malloc(sizeof(char) * deque.maxSize);
    return deque;
}

int deque_empty(Deque *dq)
{
    return dq->size==-1;
}

int deque_full(Deque *dq)
{
    return dq->maxSize == dq->size;
}

int deque_size(Deque *dq)
{
    return dq->size + 1;
}

int deque_push_front(Deque *dq, char data)
{
    if (deque_full(dq)) error("Deque is full.");
    else {
        ++dq->size;
        dq->front = (--dq->front < 0) ? dq->maxSize - dq->front : dq->front;
        dq->data[dq->front + 1] = data;
        return 1;
    }
}

int deque_push_back(Deque *dq, char data)
{
    if (deque_full(dq)) error("Deque is full.");
    else {
        ++dq->size;
        dq->rear = (++dq->rear >= dq->maxSize) ? dq->rear - dq->maxSize : dq->rear;
        dq->data[dq->rear] = data;
    }
}

int deque_pop_front(Deque *dq)
{
    if (deque_empty(dq)) error("Deque is empty.");
    else {
        --dq->size;
        dq->front = (++dq->front >= dq->maxSize) ? dq->front - dq->maxSize : dq->front;
        dq->data[dq->front] = '\0';

        return 1;
    }
}

int deque_pop_back(Deque *dq)
{
    if (deque_empty(dq)) error("Deque is empty.");
    else {
        --dq->size;
        dq->data[dq->rear] = '\0';
        dq->rear = (--dq->rear < 0) ? dq->maxSize - dq->rear : dq->rear;
        return 1;
    }
}

char deque_front(Deque *dq)
{
    if (deque_empty(dq)) error("Deque is empty.");
    else {
        return dq->data[(dq->front + 1) % dq->maxSize];
    }
}

char deque_back(Deque *dq)
{
    if (deque_empty(dq)) error("Deque is empty.");
    else {
        return dq->data[dq->rear];
    }
}

int deque_delete(Deque *dq)
{
    free(dq->data);
}